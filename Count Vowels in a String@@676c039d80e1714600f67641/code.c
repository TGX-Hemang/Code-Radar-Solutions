#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", &str);
    int i, count=0;
    for(i=0;i<strlen(str);i++) {
        if (str[i]=='a') count++;
        if (str[i]=='e') count++;
        if (str[i]=='i') count++;
        if (str[i]=='o') count++;
        if (str[i]=='u') count++;
    }
    printf("%d", count);
}