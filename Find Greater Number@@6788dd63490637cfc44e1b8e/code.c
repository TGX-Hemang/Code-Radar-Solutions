#include <stdio.h>

int* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>b)
    return a;
    else
    return b;
}

int main() {
    printf("%d", welcome());
    return 0;
}