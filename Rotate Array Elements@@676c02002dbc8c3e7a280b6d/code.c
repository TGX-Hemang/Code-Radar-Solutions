#include <stdio.h>

int main() {
    int len, shift;
    scanf("%d", &len);
    int arr[len];
    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);

    int last=arr[len-2];
    for (int p=0; p<shift-1; p++)
        {for (int i=len-1; i>=0; i--) {
            int temp=arr[i];
            arr[i]=arr[i-shift+1];
            arr[i-shift+1]=temp;
        }}

    for (int i=0; i<len; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}