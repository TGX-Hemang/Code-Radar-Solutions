#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2d[n][1];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        }
    
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i]==arr2d[j][0]) {
                arr2d[j][1]+=1;
            }
            else { 
                arr2d[j][0]=arr[i];
                arr2d[j][1]=0;
                }
        }
    }
    
    for (int i=0; i<=n; i++) {
        printf("%d %d\n", arr2d[i], arr2d[i][0]);
    }

}