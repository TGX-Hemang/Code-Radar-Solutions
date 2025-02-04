#include <stdio.h>

char* welcome() {
    int c,s;
    scanf("%d %d", &c, &s);
    if (s>c)
    return "Profit";
    else if (c==s)
    return "No Profit No Loss";
    else
    return "Loss";
}

int main() {
    printf("%s", welcome());
    return 0;
}