#include <stdio.h>

int main() {
    int len, count=0;
    scanf("%d", &len);
    int arr[len], i, max;
    for(i=0;i<len;i++) 
        scanf("%d", &arr[i]);
    if (len<2) {
        printf("-1");
        return 0;
    }
    for(i=0;i<len;i++) {
        if (arr[i]==arr[i-1])
        count++;
    }
    if(count==len-1) {
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
    arr[max_index]=-999999999;
    int max2=arr[0];
    
    for(i=0;i<len;i++) {
       if (max2<arr[i])
        max2=arr[i];
    }
    printf("%d", max2);
}