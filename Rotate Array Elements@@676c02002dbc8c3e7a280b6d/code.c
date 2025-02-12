#include <stdio.h>

int main() {
    int len, shift;
    scanf("%d", &len);
    int arr[len];
    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);

    int j=0, temp[shift];
    for (int i=len-1; i>shift; i--) {
        temp[i]=arr[j]
        j++;
    }

    for (int i=len-1; i>=0; i--) {
        int temp=arr[i];
        arr[i]=arr[i-shift];
        arr[i-shift]=temp;
    }

    for(int i=0; i<shift; i++) {
        arr[i]=temp[i];
    }

    for (int i=0; i<len; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}