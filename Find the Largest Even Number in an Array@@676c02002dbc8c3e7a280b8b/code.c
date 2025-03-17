#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int count=0, a[n], i;
    int max=-1;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        max = (!a[i]%2 && a[i]>a[i+1])?a[i]: max;
    }
    printf("%d", max);
}