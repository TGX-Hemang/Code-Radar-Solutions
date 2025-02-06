#include <stdio.h>

int welcome() {
    int num, bit;
    scanf("%d %d", &num, &bit);
    int num_compl = num;
    num_compl = num_compl>>bit;
    num_compl = ~num_compl;
    num_compl <<= bit;
    // 111 -> 000 -> 111
    // 111 -> 110 -> 6
    // 111 -> 101 -> 5
    // num_copy += num;
    return num_compl;

}

int main() {
    printf("%d", welcome());
    return 0;
}