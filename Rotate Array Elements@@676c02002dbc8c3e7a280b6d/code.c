#include <stdio.h>

int main() {
    int len, shift;
    scanf("%d", &len);
    int arr[len];
    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);

    int last=arr[shift+1];

    for (int i=len-1; i>=0; i--) {
        int temp=arr[i];
        arr[i]=arr[i-shift];
        arr[i-shift]=temp;
    }

        // arr[shift]=last;

    for (int i=0; i<len; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}