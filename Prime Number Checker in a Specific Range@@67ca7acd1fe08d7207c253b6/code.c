#include <math.h>

int isPrime(int n) {
    int i;
    for(i=2;i<n/2; i++) {
        if(n%i==0) return 0;
    }
    return 1;
}

void printPrimesInRange(int a, int b) {
    int r;
    for(r=a; r<=b; r++) 
    {
        if (isPrime(r))
        printf("%d ", r);
    }
}