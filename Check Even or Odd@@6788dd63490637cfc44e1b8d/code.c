#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d", &a);
    if (a%2==0)
    return "Een";
    else
    return "Odd";
}

int main() {
    printf("%s", welcome());
    return 0;
}