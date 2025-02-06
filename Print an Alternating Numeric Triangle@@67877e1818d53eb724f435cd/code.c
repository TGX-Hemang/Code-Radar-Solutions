#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (i%2==0) {
                if (j==1)
                printf("0 1 ", j%2);

                }
            else
            printf("%d ", j%2);
        }
        printf("\n");
    }
    return 0;
}