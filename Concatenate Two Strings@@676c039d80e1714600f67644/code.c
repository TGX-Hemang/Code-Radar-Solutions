#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s", &s1);
    scanf("%s", &s2);
    int i, j=0;
    for(i=strlen(s1);i<strlen(s2)+strlen(s1);i++) {
        s1[i]=s2[j++];
    }
    for(j=0; j<i-1;j++) {
        printf("%c", s1[j]);
    }
}