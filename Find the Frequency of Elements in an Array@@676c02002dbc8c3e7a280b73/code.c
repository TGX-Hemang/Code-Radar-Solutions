#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2d[20][20];
    int count =0;
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);

            if (arr[i]==arr2d[i][0]) {
                arr2d[i][1]+=1;
                }
            else {
                arr2d[i][0]=arr[i];
                arr2d[i][1]=0; 
                count++;
                }
        }
    
    for (int i=0; i<count; i++) {
        printf("%d %d\n", arr2d[i][0], arr2d[i][1]);
    }

}