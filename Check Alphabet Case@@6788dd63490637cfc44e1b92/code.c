#include <stdio.h>

char* welcome() {
    char a;
    scanf("%c", &a);
    if(a>'A' && a<'Z'){
        return "Uppercase";
    }
    else if (a>'a' && a<'z'){
        return "Lowercase";
    }
    else {
        return "Not an Alphabet";
    }
        
    }


int main() {
    printf("%s", welcome());
    return 0;
}