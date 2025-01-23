#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d", &a);
    if (a%5==0 && a%11==0) 
    return "Divisible";
    else
    return "Not Divisible";
}

int main() {
    printf("%s", welcome());
    return 0;
}