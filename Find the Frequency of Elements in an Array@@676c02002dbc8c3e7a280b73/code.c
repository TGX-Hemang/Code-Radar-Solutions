#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2d[][];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        arr2d[arr[i]][0] += 1;
    }
    for (int i=0; i<=n; i++) {
        printf("%d %d", arr2d[i], arr2d[i][0]);
    }

}