#include <stdio.h>
#include <string.h>

int isInArray(int target, char arr[10][2]) {
    int i;
    for(i=0;i<10;i++) {
        if (target==arr[i][0]) return i;
    }
    return -1;
}

int main() {
    
    char array[1000];
    fgets(array, sizeof(array), stdin);
    int size = strlen(array);
    int ind=0, r, c;
    char count[10][2];
    for(r=0;r<10;r++) {
        for(c=0;c<2;c++) count[r][c]='0';
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
            if (count[c][1]>'0') printf("%c: %c\n", count[c][0], count[c][1]);
    }
}