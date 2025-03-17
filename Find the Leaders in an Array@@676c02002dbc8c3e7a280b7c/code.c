#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n],i;
    for(i=0;i<n;i++)    
        scanf("%d", &a[i]);
    if (a[0]>a[1]) printf("%d ", a[0]);
    for(i=0;i<n;i++) {
        if (a[i]>a[(i-1>0)?i-1: 0]&&a[i]>a[(i+1<n)?i+1: n-1])
            printf("%d ", a[i]);
    }
    printf("%d", a[n-1]);
    
}