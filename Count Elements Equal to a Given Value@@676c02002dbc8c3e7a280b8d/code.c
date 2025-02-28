#include <stdio.h>

int main() {
    int size, number;
    scanf("%d %d", &size, &number);

    int user_arr[size];
    int r,, count=0;
    for(r=0; r<size; r++)
        scanf("%d", &user_arr[r]);
    
    for(r=0; r<size; r++) {
        if (user_arr[r]==number)
            ++count;
    }

    printf("%d", count);
}