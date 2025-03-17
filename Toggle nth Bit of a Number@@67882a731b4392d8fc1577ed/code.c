#include <stdio.h>

int main() {
    int n, bit;
    scanf("%d %d", &n, &bit);
    n = n ^ (1<<bit);
    printf("%d", n);  
    return 0;
}

