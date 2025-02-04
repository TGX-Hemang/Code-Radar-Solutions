#include <stdio.h>

char* welcome() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a==b==c)
    return "Equilateral";
    else if (a==b!=c) || (a!=b==c)
    return "isosceles";
    else
    return "Scalene";
}

int main() {
    printf("%s", welcome());
    return 0;
}