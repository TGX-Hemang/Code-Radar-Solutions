#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for (int j=n; j>=i; j++) {
            printf(" ");
        }
        for (int k=1; k<=i; k++) {
            if (k%3==0) 
            continue;
            else
            printf("%d", k%3);
        }
    }
    return 0;
}