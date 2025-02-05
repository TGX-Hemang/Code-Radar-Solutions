#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if ((b*b) == a)
    return "Yes";
    else
    return "No";
}

int main() {
    printf("%s", welcome());
    return 0;
}