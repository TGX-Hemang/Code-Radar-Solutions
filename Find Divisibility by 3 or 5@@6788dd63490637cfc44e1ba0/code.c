#include <stdio.h>

char* welcome() {
    int n;
    scanf("%d", &n);
    if (n%3 == 0)
    return "Divisible by 3";
    else if (n%5 == 0)
    return "Divisible by 5";
    else if (n%3 == n%5)
    return "Divisible by Both";
    else
    return "Not Divisible";
}

int main() {
    printf("%s", welcome());
    return 0;
}