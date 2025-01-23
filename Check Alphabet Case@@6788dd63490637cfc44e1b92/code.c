#include <stdio.h>

char* welcome() {
    char a;
    scanf("%c", &a);
    for (char i = 'A'; i<='Z'; i++) {
        if (a==i) {
            return "Uppercase";
            break;
        }
        else {
            return "Lowercase";
            break;
        }
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}