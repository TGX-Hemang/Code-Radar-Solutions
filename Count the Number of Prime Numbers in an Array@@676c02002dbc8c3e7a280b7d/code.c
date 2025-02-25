#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) 
        scanf("%d", &arr[i]);
    
    int r,c;
    for(r=0; r<n; r++) 
    {
        for(c=2; c<=arr[r]-1; c++) {
            if (arr[r]%c==0)
            {
                break;
            }
        }
        if (c==arr[r]) count++;
    }
    printf("%d",count);
}