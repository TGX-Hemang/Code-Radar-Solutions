#include <stdio.h>

char* welcome() {
    char c;
    scanf("%c", &c);
    if (c=='A')
    return "Excellent";
    else if (c=='B')
    return "Good";
    else if (c=='C')
    return "Average";
    else if (c=='D')
    return "Below Average";
    else
    return "Fail";
}

int main() {
    printf("%s", welcome());
    return 0;
}