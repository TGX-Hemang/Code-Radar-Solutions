#include <stdio.h>

int welcome() {
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (c=='+') 
    return a+b;
    else if(c=='-')
    return a-b;
    else if (c=='/')
    return a/b;
    else if (c=='*')
    return a*b;
}

int main() {
    printf("%d", welcome());
    return 0;
}