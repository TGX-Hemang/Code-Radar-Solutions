#include <stdio.h>

int main() {
    int n;
    int arr[10];
    scanf("%d", &n);
    int count =0, temp;
    while (n != 0) {
        temp = n%2;
        if (temp==1) 
        {n -= 1;
        arr[count] = 1;}
        else 
        {n=n;
        arr[count] = 0;}
        count++;
        n /= 2;
    }
    for (int i=0; i<= count; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}