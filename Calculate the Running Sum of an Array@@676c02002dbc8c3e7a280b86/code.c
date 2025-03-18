#include <stdio.h>

int main() {
    void running_sum(int *rp, int *p, int n);
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    //int retarr[n];
    //running_sum(&retarr[0], &arr[0], n);
    int sum;
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<=i;j++) {
            sum+=*(p+j);
        }
        printf("%d ", sum);
    }
    //for(i=0;i<n;i++) 
     //   printf("%d ", retarr[i]);
}

void running_sum(int *rp, int *p, int n) {
    int i,j,sum;
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<=i;j++) {
            sum+=*(p+j);
        }
        *(rp+i)=sum;
    }
}

