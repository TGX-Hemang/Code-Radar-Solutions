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
            printf("Division by zero error");
            return 1;
        }
    } else if (ch == '*') {
        res = a * b;
    } else {
        printf("error");
        return 1;
    }

    printf("%d", res);
    return 0;
}
