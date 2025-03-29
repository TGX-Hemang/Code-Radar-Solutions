#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%100s", str);

    int n=strlen(str), i;
    for(i=0;i<n/2;i++) {
        if (str[i]!=str[n-i-1])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}