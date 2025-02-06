#include <stdio.h>

int welcome() {
    int n, sum=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("%d", welcome());
    return 0;
}