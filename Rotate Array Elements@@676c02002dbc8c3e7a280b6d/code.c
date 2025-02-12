#include <stdio.h>

int main() {
    int len, arr[len], shift;
    scanf("%d", &len);
    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);

    int last=arr[len-1];
    for (int i=0; i<len; i++) {
        int temp=arr[i];
        arr[i]=arr[i+shift-1];
        arr[i+shift-1]=temp;
    }

    for (int i=0; i<len; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}