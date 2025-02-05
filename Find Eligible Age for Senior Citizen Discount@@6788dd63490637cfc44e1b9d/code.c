#include <stdio.h>

char* welcome() {
   int age;
   scanf("%d", &age);
   if (age>=60)
   return "Eligible";
   else
   return "Not Eligible";
}

int main() {
    printf("%s", welcome());
    return 0;
}