#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0;i<n;i++) 
    scanf("%d", &arr[i]);
    int j, count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if (arr[i]==arr[j])
            count++;
        }
        if (count>1) {count=0;break;}
    }
    printf("%d", arr[i]);
}