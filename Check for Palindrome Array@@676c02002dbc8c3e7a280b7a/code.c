#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], i, j, count;
    for(i=0;i<n;i++) 
        scanf("%d", &a[i]);
    for(i=0,j=n-1;i<n,j>=0;i++,j--) 
        count += (a[i]==a[j])?1:0;
    printf((count==n)?"YES":"NO");
}