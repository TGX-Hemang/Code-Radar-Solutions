#include <stdio.h>
#include <math.h>

int main() {
    int n, bit;
    int arr[10];
    scanf("%d %d", &n, &bit);
    int count = 0, temp;
    // if (n==0)
    // {printf("0");
    // return 0;}

    while (n != 0) {
        temp = n%2;
        if (temp==1) 
        {
        arr[count] = 1;}
        else 
        {
        arr[count] = 0;}
        count++;
        n /= 2;
    }
    
    for (int i=count-1; i>=0; i--) {
        for (int j=0; j<=count; j++) {
            arr[i]=arr[j];
        }
    }
    arr[bit] ~= arr[bit];
    for (int k=0; k<=count; k++) {
        printf("%d", arr[k]);
    }
    return 0;
}