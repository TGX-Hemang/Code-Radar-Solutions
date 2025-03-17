#include <stdio.h>

int main() {
    int n, bit;
    scanf("%d %d", &n, &bit);
    n = n ^ (0<<bit);
    printf("%d", n);  
    return 0;
}

