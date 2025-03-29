#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%100s", str);

    int i;
    for(i=0;i<strlen(str)/2;i++) {
        if (str[i]!=str[strlen(str)-i-1])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}