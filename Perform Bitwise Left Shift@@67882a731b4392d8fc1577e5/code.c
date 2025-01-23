#include <stdio.h>

int welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    int r = a<<b;
    return r;
}

int main() {
    printf("%s", welcome());
    return 0;
}