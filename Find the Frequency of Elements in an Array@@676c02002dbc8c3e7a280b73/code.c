#include <stdio.h>

int isInArray(int target, int arr[10][2]) {
    int i;
    for(i=0;i<10;i++) {
        if (target==arr[i][0]) return i;
    }
    return -1;
}

int main() {
    int size;
    // printf("Enter the size of array: ");
        scanf("%d", &size);

    int array[size], index;
    for(index=0;index<size;index++) 
        scanf("%d", &array[index]);
    
    int ind=0, r, c, count[10][2];
    for(r=0;r<10;r++) {
        for(c=0;c<2;c++) count[r][c]=-999;
    }
    
    for(r=0;r<size;r++) {
            int index = isInArray(array[r], count);
            if (index==(-1)) 
            {
                count[ind][0]=array[r];
                count[ind][1]=1;
                ind++;
            }
            else count[index][1] += 1;
    }

    for(c=0;c<size;c++) {
            if (count[c][1]>0) printf("%d %d\n", count[c][0], count[c][1]);
    }
}