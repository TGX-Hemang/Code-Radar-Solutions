#include <stdio.h>
int counter {
    static int count = 1;
    count++;
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i;j++) {
            int c = counter();
            printf("%d ", counter());
        }
        printf("\n");
    }
    return 0;
}