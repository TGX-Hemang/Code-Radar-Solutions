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
    int i;
    int min = *p;
    for(i=1;i<n;i++) {
        if (min>*(p+i))
            min=*(p+i);
    }
    int min2 = *(p + (min == *p ? 1 : 0));  
    for(i=0;i<n;i++) {
        if (min2>*(p+i) && min2!=min)
            min2=*(p+i);
    }
    return min2;
}
