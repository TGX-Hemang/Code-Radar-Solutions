#include <stdio.h>

int main() {
    long int a;
    scanf("%d", &a);
    a=a>>1;
    if (a&1==1) {
        printf("Set");
    }
    else 
    printf("Not Set");
    return 0;
}