#include <stdio.h>

int main() {
    void leaders(int *rp, int *p, int n);
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    int retarr[]={0};
    leaders(&retarr[0], &arr[0], n);
    for(i=0;i<n;i++)
        printf("%d", retarr[i]);
}

void leaders(int *rp, int *p, int n) {
    int i;
    for(i=0;i<n;i++) {
        if(*(p+i)>*(p-((*(p-i)<0)?0: 1)) && *(p+i)>*(p+((*(p+i)<n)?i: 0)))
        *(rp++)=*(p+i);
    }
}

