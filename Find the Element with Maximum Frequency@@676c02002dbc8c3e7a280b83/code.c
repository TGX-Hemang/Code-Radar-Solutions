#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i,j, count=0;
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    int max, max_i;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        {if (arr[i]==arr[j]) {
            count++;
            max=count;
            max_i = i;
        }
        if (count>=max) max=count, max_i=i;
        count=0;}
    }
    printf("%d", arr[max_i]);
}