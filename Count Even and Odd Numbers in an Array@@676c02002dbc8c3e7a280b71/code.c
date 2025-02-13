#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len];
    int count_even, count_odd;
    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]%2==0) 
        count_even += 1;
        else
        count_odd += 1;
    }
    printf("%d %d", count_even, count_odd);
}