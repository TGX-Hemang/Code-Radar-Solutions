#include <stdio.h>

int main() {
    int n;
    // printf("Enter the number of rows: ");
    scanf("%d", &n);
    int i, j, k;
    for(i=1;i<n*2;i++) {
        if (i<=n) {
            for (k=1;k<=n-i;k++) printf(" ");
            for (j=1;j<=i*2-1;j++) printf("*");
            printf("\n");
        }
        else {
            for (k=1;k<=i-n;k++) printf(" ");
            for (j=1;j<=(n*2-i)*2-1;j++) printf("*");
            printf("\n");
        }
    }
}