#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    fgets(str1, sizeof(1000), stdin);
    int i=0;
    while (str1[i]!='\0') i++;
    printf("%d", i);
}