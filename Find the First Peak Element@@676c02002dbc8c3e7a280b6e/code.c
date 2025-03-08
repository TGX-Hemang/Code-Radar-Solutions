#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int arr[len];
    int i;
    for(i=0;i<len;i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];   // assuming first element as the temporary peak
    for(i=0;i<len;i++) {
        if (max<arr[i]) // checking if assimption is correct or not
        {
            max=arr[i]; // got the current peak value till ith index

            // now checking if it really is the peak and return the final output
            if (max>arr[i+1] || max==arr[len-1])
            {
                // it returns the output and ends the main function with return 0
                printf("%d", max);
                return 0;
            }
        }
    }
    // incase if it fails, control will shift to this statement
    printf("-1");
}