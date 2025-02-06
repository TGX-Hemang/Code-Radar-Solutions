#include <stdio.h>

int welcome() {
    int a,b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    int res;
    if (ch=='+') 
    {res = a+b;}

    else if (ch=='-')
   { res = a-b;}

    else if (ch=='/')
    {res = (int) a/b;}

    else if (ch=='*')
    {res = a*b;}

    else 
    printf("error");

    return res;
}

int main() {
    printf("%d", welcome());
    return 0;
}