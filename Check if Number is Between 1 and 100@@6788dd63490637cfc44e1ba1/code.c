#include <stdio.h>

char* welcome() {
    int n;
    scanf("%d", &n);
    if (n>=1 && n<=100)
    return "In Range";
    else
    return "Out of Range";
}

int main() {
    printf("%s", welcome());
    return 0;
}