#include <stdio.h>

char* welcome() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b)>c)
    return "Valid";
    else
    return "Invalid";
}

int main() {
    printf("%s", welcome());
    return 0;
}