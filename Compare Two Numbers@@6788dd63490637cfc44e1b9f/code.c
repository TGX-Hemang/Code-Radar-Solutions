#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>b)
    return "First";
    else if (a==b)
    return "Equal";
    else
    return "Second";
}

int main() {
    printf("%s", welcome());
    return 0;
}