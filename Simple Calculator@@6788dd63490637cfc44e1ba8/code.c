#include <stdio.h>

int welcome() {
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    int res;
    if (c=='+') 
    {res = a+b;
    return res;}
    else if (c=='-')
    {res = a-b;
    return res;}
    else if (c=='/')
   { res = (int) a/b;
    return res;}
    else if (c=='*')
    {res = a*b;
    return res;}
}

int main() {
    printf("%d", welcome());
    return 0;
}