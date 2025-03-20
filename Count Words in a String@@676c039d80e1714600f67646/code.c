#include <stdio.h>
#include <string.h>

int main() {
    char str[10000];
    scanf("%s", &str);
    int i, count=0;
    for(i=0;i<strlen(str);i++) {
        if (str[i]==" ") count++;
    }
    printf("%d", count+1);
}