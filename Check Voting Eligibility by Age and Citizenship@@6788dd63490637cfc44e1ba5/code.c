#include <stdio.h>

char* welcome() {
    int age, cit;
    scanf("%d %d", &a, &b);
    if (b==1) {
        if (a>=18)
        return "Eligible";
        else
        return "Not Eligible";
    }
    else 
    return "not Eligible";
}

int main() {
    printf("%s", welcome());
    return 0;
}