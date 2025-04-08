#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s", &s1);
    scanf("%s", &s2);
    int i;
    for(i=0;i<strlen(s1);i++) {
        printf("%c", s1[i]);
    }
    for(i=0;i<strlen(s2);i++) {
        printf("%c", s2[i]);
    }
}