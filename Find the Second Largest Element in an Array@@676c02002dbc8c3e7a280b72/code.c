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
    max = 0;
    arr[max_index]=-1212112;
    for(i=0;i<len;i++) {
       if (max<arr[i])
        max=arr[i];
    }
    printf("%d", max);
}