#include <stdio.h>

int main() {
    int n;
    int iter = 0;
    char j = 'A';
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        while (iter<i) {
            printf("%c", j);
            j++;
        }
    }
    return 0;
}