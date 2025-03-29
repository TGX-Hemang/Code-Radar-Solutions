#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    int i;
    for (i = 0; i < n / 2; i++) { // Only loop through half the string
        char swap = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = swap;
    }
    printf("%s", str);
    return 0;
}