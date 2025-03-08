#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len], i, max;
    for(i=0;i<len;i++) 
        scanf("%d", &arr[i]);
    max = arr[0];
    int max_index;
    for(i=0;i<len;i++) {
        if (max<arr[i])
        {max=arr[i];
        max_index=i;}
    }
    arr[max_index]=0;
    for(i=0;i<len;i++) {
        if (max<arr[i])
        {max=arr[i];}
    }
    printf("%d", max);
}