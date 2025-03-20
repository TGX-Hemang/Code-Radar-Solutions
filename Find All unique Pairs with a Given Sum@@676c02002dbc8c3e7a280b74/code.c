#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0;i<n;i++) 
    scanf("%d", &arr[i]);
    scanf("%d", &target);
    int j;
    for(i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (arr[i]+arr[j]==target && i!=j)
            printf("%d %d\n", arr[i], arr[j]);
        }
    }
}