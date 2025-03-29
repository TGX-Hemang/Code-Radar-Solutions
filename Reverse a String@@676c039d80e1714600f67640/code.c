#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", &str);

    int i;
    for(i=0;i<strlen(str);i++) {
        str[i]=str[strlen(str)-i-1];
    }
    printf("%s", str);
}