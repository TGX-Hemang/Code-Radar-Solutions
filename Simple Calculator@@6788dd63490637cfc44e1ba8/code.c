#include <stdio.h>

char* welcome() {
    int a,b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    int res;
    switch(ch){
    case ('+'): 
        res = a+b;
        break;
    case ('-'):
        res = a-b;
        break;
    case ('/'):
        res = (int) a/b;
        break;
    case ('*'):
        res = a*b;
        break;
    default:
        return "error";
        }
    return "%d", res;
}

int main() {
    printf("%s", welcome());
    return 0;
}