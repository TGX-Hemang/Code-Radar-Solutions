#include <stdio.h>

char* welcome() {
    int n;
    scanf("%d", &n);
    switch(n)
    {case (1):
    return "Monday";
    break;
    case (2):
    return "Tuesday";
    break;
    case (3):
    return "Wednesday";
    break;
    case (4):
    return "Thursday";
    break;
    case (5):
    return "Friday";
    break;
    case (6):
    return "Saturday";
    break;
    case (7):
    return "Sunday";
    break;
    default:
    return "Invalid";}
}

int main() {
    printf("%s", welcome());
    return 0;
}