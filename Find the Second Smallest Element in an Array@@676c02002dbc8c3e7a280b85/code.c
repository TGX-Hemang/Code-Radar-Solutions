#include <stdio.h>

int main() {
    int smallest_2nd(int *p, int n);
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("%d", smallest_2nd(&arr[0], n));

}

int smallest_2nd(int *p, int n) {
    if(n==1) return -1;
    int i;
    int min = *p;
    for(i=0;i<n;i++) {
        if (min>*(p+i))
            min=*(p+i);
    }
    int min2 = 1212121;  
    for(i=0;i<n;i++) {
        if (min2>*(p+i)&&min!=*(p+i))
            min2=*(p+i);
    }
    return (min2==*p && *p=*(p+1))?-1: min2;
}
