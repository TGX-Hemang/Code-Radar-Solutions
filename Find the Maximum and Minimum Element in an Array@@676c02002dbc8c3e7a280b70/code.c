#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len], i, max, min;
    for(i=0;i<len;i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=0;i<len;i++) {
        if (max<arr[i])
        max = arr[i];
        if (min>arr[i])
        min = arr[i];
    }
    printf("%d %d", max, min);
}