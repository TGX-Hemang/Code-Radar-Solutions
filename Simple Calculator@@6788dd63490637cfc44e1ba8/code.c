#include <stdio.h>

int main() {
    int a, b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    int res;

    if (ch == '+') {
        res = a + b;
    } else if (ch == '-') {
        res = a - b;
    } else if (ch == '/') {
        if (b != 0) {
            res = a / b;
        } else {
            printf("error");
        }
    } else if (ch == '*') {
        res = a * b;
    } else {
        printf("error");
    }

    printf("%d", res);
    return 0;
}
