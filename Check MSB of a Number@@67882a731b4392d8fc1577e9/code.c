#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    try: a=a>>32;
    if (a&1==1) {
        printf("Set");
    }
    else 
    printf("Not Set");
    return 0;
}