#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if ((a>0 && b<0) || (a<0 && b>0))
    return "True";
    else
    return "False";
}

int main() {
    printf("%s", welcome());
    return 0;
}