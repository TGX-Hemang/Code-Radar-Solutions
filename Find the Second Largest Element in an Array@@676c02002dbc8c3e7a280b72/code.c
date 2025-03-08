#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len], i, max;
    for(i=0;i<len;i++) 
        scanf("%d", &arr[i]);

    // get the max value
    max = arr[0];
    int max_index;
    for(i=0;i<len;i++) {
        if (max<arr[i])
        {max=arr[i];
        max_index = i;}
    }
    
    for(i=0;i<len;i++) {
        if (i==max_index)
        continue;
        else if (max<arr[i])
        max=arr[i];
    }
    printf("%d", max);
}