#include <stdio.h>

char* welcome() {
    int age, cit;
    scanf("%d %d", &age, &cit);
    if (cit==1) {
        if (age>=18)
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