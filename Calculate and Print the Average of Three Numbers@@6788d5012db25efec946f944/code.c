#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    float sum = (float) (a+b+c)/3;
    printf("Average: %.2f", sum);
    return 0;
}