#include <stdio.h>

int welcome() {
    int num, bit;
    scanf("%d %d", &num, &bit);
    int num_copy = num;
    num_copy >>= bit;
    num_copy &= 0;
    num_copy += num;
    return num_copy;

}

int main() {
    printf("%d", welcome());
    return 0;
}