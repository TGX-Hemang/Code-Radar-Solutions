#include <stdio.h>

int welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    return a <<b;
}

int main() {
    printf("%s", welcome());
    return 0;
}