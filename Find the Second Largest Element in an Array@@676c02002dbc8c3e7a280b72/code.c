#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len], i, max;
    for(i=0;i<len;i++) 
        scanf("%d", &arr[i]);
    if (len<2) {
        printf("-1");
        return 0;
    }
    // get the max value
    max = arr[0];
    int max_index;
    for(i=0;i<len;i++) {
        if (max<arr[i])
        {max=arr[i];
        max_index = i;}
    }
    int max2=arr[0];
    arr[max_index]=0;
    for(i=0;i<len;i++) {
       if (max2<arr[i])
        max2=arr[i];
    }
    printf("%d", max2);
}