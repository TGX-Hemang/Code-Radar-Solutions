#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    fgets(str1, sizeof(1000), stdin);
    printf("%d", printf("%s", str1));
}