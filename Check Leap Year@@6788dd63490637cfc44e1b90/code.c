#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d", &a);
    if (a%4==0 && a>2000)
    return "Leap Year";
    else
    return "Not a Leap Year";

}

int main() {
    printf("%s", welcome());
    return 0;
}