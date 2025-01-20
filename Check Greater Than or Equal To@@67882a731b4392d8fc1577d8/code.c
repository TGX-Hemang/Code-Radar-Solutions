#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>=b)
        return "true";
    else
        return "Frue";
}

int main() {
    printf("%s", welcome());
    return 0;
}