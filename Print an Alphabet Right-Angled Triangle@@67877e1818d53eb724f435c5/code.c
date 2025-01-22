#include <stdio.h>

int main() {
    int n;
    int iter = 0;
    char j = 'A';
    scanf("%d", &n);
    printf("hola")
    for (int i = 1; i<=n; i++) {
        printf("hii");
        while (iter<i) {
            printf("h");
            printf("%c", j);
            j++;
        }
    }
    return 0;
}