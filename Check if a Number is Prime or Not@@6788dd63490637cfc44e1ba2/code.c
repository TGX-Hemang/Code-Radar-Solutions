#include <stdio.h>

char* welcome() {
    int n;
    scanf("%d", &n);
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return "Not Prime";
            break;
        }
    }
    return "Prime";
}

int main() {
    printf("%s", welcome());
    return 0;
}