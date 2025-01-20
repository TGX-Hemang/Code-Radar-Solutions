#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if a<b
        return "Frue";
    else
        return "False";
}

int main() {
    printf("%s", welcome());
    return 0;
}