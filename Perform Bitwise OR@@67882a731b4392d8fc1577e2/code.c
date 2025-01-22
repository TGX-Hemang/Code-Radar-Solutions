#include <stdio.h>

int* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    int rt = a||b;
    return rt
}

int main() {
    printf("%d", welcome());
    return 0;
}