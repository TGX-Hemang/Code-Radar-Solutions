#include <stdio.h>

char* welcome() {
    int a,b,r;
    scanf("%d %d", &a, &b);
    r = a&b;
    return r;
}

int main() {
    printf("%d", welcome());
    return 0;
}