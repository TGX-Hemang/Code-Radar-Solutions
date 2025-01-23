#include <stdio.h>

int welcome() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
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
    else if (c>a){
        if (c>b)
            return c;
        else
            return b;
    }
}

int main() {
    printf("%d", welcome());
    return 0;
}