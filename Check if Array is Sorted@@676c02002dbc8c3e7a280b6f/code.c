#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len],i;
    for(i=0;i<len;i++) {
        scanf("%d", &arr[i]);
    } 
    int index;
    for(i=0;i<len;i++) {
        index = i+1<len?i+1 : len-1;
        if (arr[i]>arr[index])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
}