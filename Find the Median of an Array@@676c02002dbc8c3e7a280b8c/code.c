#include <stdio.h>

int main() {
    int median(int *arr, int n);
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("%d", median(&arr[0], n));
}

int median(int *arr, int n) {
    if (n%2!=0) return *(arr+n/2);
    else return (*(arr+n/2)+*(arr-1+n/2))/2;
}