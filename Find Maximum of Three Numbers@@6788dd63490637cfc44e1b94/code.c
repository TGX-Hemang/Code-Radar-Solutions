#include <stdio.h>

char* welcome() {
    int a,b,c;
    scanf("%d %d %d", &a. &b, &c);
    if (a>b) {
        if (a>c) 
        return a;
        else
        return c;
    }
    else if (b>a) {
        if (b>c)
        return b;
        else
        return c;
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}