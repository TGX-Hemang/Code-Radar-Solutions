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
    for (int p=0; p<=shift; p++)
        {for (int i=len-1; i>=0; i--) {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
        }
        // arr[shift]=last;

    for (int i=0; i<len; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}