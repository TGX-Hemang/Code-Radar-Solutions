#include <stdio.h>

char* welcome() {
    char c;
    scanf("%c", &c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return "Vowel";
    else if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    return "Vowel";
    else if (c>='0' && c<='9')
    return "Digit";
    else if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
    return "Consonant";
    else
    return "Special Character";
}

int main() {
    printf("%s", welcome());
    return 0;
}