#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(100), stdin);
    printf("%d", strlen(str));
}