#include <stdio.h>

int digitSum(int n) {
    int sum=0;
    n = (n<0)?n*(-1)? n;
    while (n!=0) {
        sum += n%10;
        n /=10;
    }
    return sum;
}

int main() {
    int len;
    scanf("%d", &len);
    int arr[len], i;
    for(i=0;i<len;i++) 
        {scanf("%d", &arr[i]);
        arr[i] = digitSum(arr[i]);}
    for(i=0;i<len;i++) {
        printf("%d ", arr[i]);
    }
    
}