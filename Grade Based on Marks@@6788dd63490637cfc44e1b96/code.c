#include <stdio.h>

char* welcome() {
    int m;
    scanf("%d", &m);
    if (m>=90)
    return "A";
    else if (m>=80 && m<90)
    return "B";
    else if (m>=70 && m<80)
    return "C";
    else if (m>=60 && m<70)
    return "D";
    else
    return "F";
}

int main() {
    printf("%s", welcome());
    return 0;
}