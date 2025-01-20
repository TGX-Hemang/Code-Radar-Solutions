#include <stdio.h>

int main() {
    char name[], hobby[];
    int age;
    scanf("%s %d", &name, &age);
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby);
    return 0;
}