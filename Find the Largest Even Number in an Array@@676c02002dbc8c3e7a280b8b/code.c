#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int count=0, a[n], i;
    int max=-a[0];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        if (a[i]%2==0 && max<a[i])
            max=a[i];
    }
    printf("%d", max);
}