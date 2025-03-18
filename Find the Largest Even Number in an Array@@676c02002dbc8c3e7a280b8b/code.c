#include <stdio.h>

int main() {
    int largest_even(int *p, int n);
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("%d", largest_even(&arr[0], n));

}

int largest_even(int *p, int n) {
    int i;
    int max = *p, count=0;
    for(i=0;i<n;i++) {
        if (*(p+i)%2==0 && max<*(p+i))
            {max=*(p+i);
            count++;}
    }
    return (!count)?max: -1;
}

