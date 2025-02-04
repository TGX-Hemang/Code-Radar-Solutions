#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a%b ==0)
    return "Yes";
    else
    return "No";
}

int main() {
    printf("%s", welcome());
    return 0;
}