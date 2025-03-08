#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[n],i;
    for(i=0;i<n;i++) {
        scanf("%d", &arr[n]);
    }
    for(i=0;i<n;i++) {
        if (arr[i]>arr[i+1])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
}