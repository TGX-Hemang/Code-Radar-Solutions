#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len];
    int i;
    for(i=0;i<len;i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(i=0;i<len;i++) {
        if (max<arr[i])
        {max=arr[i];
        if (max>arr[i+1])
        {printf("%d", max);
        break;}}
    }
}