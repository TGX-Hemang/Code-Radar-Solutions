#include <stdio.h>

int power(int a,int b) {
    int ret=1;
    for (int i=1; i<=b; i++) {
        ret *= a;
    }
    return ret;
}

int main() {
    long int n;
    int arr[100];
    scanf("%ld", &n);
    int count = 0, zero=0, temp;

    while (n != 0) {
        temp = n%2;
        if (temp==1) 
        {
        arr[count] = 1;}
        else 
        {
        arr[count] = 0;}
        count++;
        n /= 2;
    }
    for (int i=1; i<=count; i++) {
        if (arr[i]==1)
        break;
        else 
        zero+=1;
    }
    if (arr[1]==1)
    printf("0");
    else
    {
        if (arr[1]==0)
        printf("%d", zero+1);
        else
        printf("%d", count-1); } 
    return 0;
}