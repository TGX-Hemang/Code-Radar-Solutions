#include <stdio.h>
int InArray(int arr[], int target, int len) {
    int i;
    for(i=0;i<len;i++) {
        if (target==arr[i]) return 1;
    }
    return 0;
}
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0;i<n;i++) 
    scanf("%d", &arr[i]);
    scanf("%d", &target);
    int count=0, sum_arr[n]={0};
    int j;
    for(i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (arr[i]+arr[j]==target && i!=j && InArray(sum_arr, i, n) && InArray(sum_arr, j, n))
            sum_arr[count++] = arr[i];
            sum_arr[count++] = arr[j];
        }
    }
    count=0;
    for(i=0;i<n;i++) {
        printf("%d %d\n", sum_arr[count++]);
    }
}