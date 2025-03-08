#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len],i;
    for(i=0;i<len;i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<len;i++) {
        if (arr[i]>arr[i+1])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
}