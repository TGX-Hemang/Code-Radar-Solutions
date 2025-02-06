#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    int res;

    switch(ch) {
        case '+': 
            res = a+b;
            break;
        case '-':
            res = a-b;
            break;
        case '/':
            res = (int) a/b;
            break;
        case '*':
            res = a*b;
            break;
        default:
            printf("error");
            break;
        }

    printf("%d", res);
    return 0;
}

