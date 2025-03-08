#include <stdio.h>

int main() {
    int len, index=0;
    scanf("%d", &len);
    int arr[len], i, new_arr[len];
    for(i=0;i<len;i++) {
        scanf("%d", &arr[i]);

        // if not zero then get appended at beginning of final array
        if (arr[i]!=0)
        {
            new_arr[index] = arr[i];
            // index goes form 0 to number of nonzero elements
            index++;
        }
    }

    // appending all zeroes now
    for(i=index;i<len;i++) {
       new_arr[index]=0;
    }
    // output
    for(i=0;i<n;i++) {
        printf("%d ", new_arr[i]);
    }
}