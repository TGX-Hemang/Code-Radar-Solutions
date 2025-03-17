#include <stdio.h>

int power(int a,int b) {
    int ret=1;
    for (int i=1; i<=b; i++) {
        ret *= a;
    }
    return ret;
}

int main() {
    int n, bit;
    scanf("%d %d", &n, &bit);
    n = n ^ (1<<bit);
    printf("%d", n);  
    return 0;
}

// number = number ^ (1<<n)