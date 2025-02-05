#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>0 && b>0) || (a<0 && b<0)
    return "Same Sign";
    else
    return "Different Sign";
}

int main() {
    printf("%s", welcome());
    return 0;
}