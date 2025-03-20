#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", &str);
    int i, count=0;
    for(i=0;i<strlen(str);i++) {
        if (str[i]=='a'|| str[i]=='A') count++;
        if (str[i]=='e'|| str[i]=='E') count++;
        if (str[i]=='i'|| str[i]=='I') count++;
        if (str[i]=='o'|| str[i]=='O') count++;
        if (str[i]=='u'|| str[i]=='U') count++;
    }
    printf("%d", count);
}