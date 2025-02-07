#include <stdio.h>

int isPrime(num) {
    for (int i=2; i<num; i++) {
        if (num%i==0)
        return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        int res = isPrime(num);
        printf("%d\n", res);
    }
    return 0;
}
