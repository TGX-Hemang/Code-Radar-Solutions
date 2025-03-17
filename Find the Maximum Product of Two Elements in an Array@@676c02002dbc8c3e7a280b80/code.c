#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n],i, max, j;
    for(i=0;i<n;i++) 
        scanf("%d", &a[i]);
    max=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if (max<a[i]*a[j] && i!=j)
                max = a[i]*a[j];
        }
    }
    printf("%d", max);
}