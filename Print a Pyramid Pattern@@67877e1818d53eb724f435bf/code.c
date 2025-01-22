#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        for (int j=n-i+1;j>1;j--) {
            printf(" ");
        }
        for (int k=1;k<=i;k++) {
            printf("*");
        }
        for (int l=2; l<=i; l++) {
            rpintf("*");
        }
        printf("\n");
    }
    return 0;
}