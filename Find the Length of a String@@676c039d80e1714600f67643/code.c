#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    fgets(str1, 1000, stdin);
    if (str1=' ') {printf("0"); return 0;}
    int i=0;
    while (str1[i]!='\0') i++;
    printf("%d", i);
}