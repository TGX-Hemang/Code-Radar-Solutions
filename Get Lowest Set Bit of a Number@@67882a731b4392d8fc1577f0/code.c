#include <stdio.h>

int power(int a,int b) {
    int ret=1;
    for (int i=1; i<=b; i++) {
        ret *= a;
    }
    return ret;
}

int main() {
    int n;
    int arr[100];
    scanf("%d", &n);
    int count = 0, temp, lsb;

    while (n != 0) {
        if (n<2)
        arr[count]=1;
        else {
        temp = n%2;
        if (temp==1) 
        {
        arr[count] = 1;}
        else 
        {
        arr[count] = 0;}}
        count++;
        n /= 2;
    }

    int temp1;
    for (int i = 0; i < count / 2; i++) {
    temp1 = arr[i];
    arr[i] = arr[count - 1 - i];
    arr[count - 1 - i] = temp1;
}
    for ( int i=0; i<=count; i++) {
        if (arr[i]==1) {
            lsb=i;
            break;
        }
    }
    printf("%d", lsb);  
    return 0;
}