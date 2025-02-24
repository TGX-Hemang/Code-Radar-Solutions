#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++) 
        scanf("%d", &arr[i]);
    int number;
    scanf("%d", &number);
    for(int j=0; j<size; j++) {
        if (arr[j]==number)
        {printf("%d", j);
        return 0;}
    }
    printf("-1");
}