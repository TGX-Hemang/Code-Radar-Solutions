#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n],i;
    for(i=0;i<n;i++)    
        scanf("%d", &a[i]);
    
    for(i=0;i<n;i++) {
        if (a[i]>a[i-1]&&a[i]>a[(i+1<n)?i+1: n-1])
            printf("%d ", a[i]);
    }
}