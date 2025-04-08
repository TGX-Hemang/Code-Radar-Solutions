#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int i;
    for(i=0;i<strlen(s1);i++) {
        printf("%c", s1[i]);
    }
    for(i=0;i<strlen(s2);i++) {
        printf("%c", s2[i]);
    }
}