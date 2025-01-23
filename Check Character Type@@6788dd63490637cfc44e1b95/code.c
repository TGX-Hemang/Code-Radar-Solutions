#include <stdio.h>

char* welcome() {
    char c;
    scanf("%c", &c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return "Vowel";
    else
    return "Consonant";
}

int main() {
    printf("%s", welcome());
    return 0;
}