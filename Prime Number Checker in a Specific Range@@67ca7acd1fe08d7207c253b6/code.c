#include <math.h>

int isPrime(int n) {
    int i;
    if (n==1||n==0||n<0) return 0;
    for(i=2;i<n;i++) {
        if(n%i==0) return 0;
    }
    return 1;
}

void printPrimesInRange(int a, int b) {
    int r, count=0;
    for(r=a; r<=b; r++) 
    {
        if (isPrime(r))
        {printf("%d ", r);
        count++;}
    }
    if (count==0) printf("No prime numbers");
}