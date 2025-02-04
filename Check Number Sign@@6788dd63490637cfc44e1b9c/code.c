#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d", &a);
    if (a>0)
    return "Positive";
    else if (a==0)
    return "Zero";
    else
    return "Negative"
}

int main() {
    printf("%s", welcome());
    return 0;
}