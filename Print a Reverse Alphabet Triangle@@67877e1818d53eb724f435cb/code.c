#include <stdio.h>

int main() {
    int n;
    // printf("Enter a number : ");
        scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        char c = 'A';
        for (int j=1; j<=n-i+1; j++) {
            printf("%c ", c++);
        }
        printf("\n");
    }
    return 0;
}