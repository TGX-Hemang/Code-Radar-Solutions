#include <stdio.h>
#include <string.h>

int main() {
    char str[10000];
    fgets(str, sizeof(str), stdin);
    int i, count=0;
    for(i=0;i<strlen(str);i++) {
        if (str[i] == ' ' && i!=0) 
            count++;
    }
    printf("%d", count+1);
}