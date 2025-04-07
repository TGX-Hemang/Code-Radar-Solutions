#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    fgets(str1, sizeof(100), stdin);
    printf("%d", strlen(str1));
}