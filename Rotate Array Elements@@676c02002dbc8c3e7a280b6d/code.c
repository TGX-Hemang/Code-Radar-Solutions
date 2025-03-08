#include <stdio.h>

int main() {
    int len, shift;
    scanf("%d", &len);
    int arr[len], new_arr[len], i;
    for (i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);
    for(i=0;i<len-shift;i++) {
        new_arr[i+1]=arr[i];
    }
    for(i=0;i<len;i++) {
        printf("%d\n", new_arr[i]);
    }
    return 0;
}