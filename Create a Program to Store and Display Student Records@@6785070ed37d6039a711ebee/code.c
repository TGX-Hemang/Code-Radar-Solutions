#include <stdio.h>

struct students {
        int roll_num;
        char name[50];
        float marks;
    };

int main() {
    int n;
    scanf("%d", &n);

    int r;
    for(r=1; r<=n; r++)
    {
        scanf("%d", &students.roll_num);
        scanf("%s", &students.name);
        scanf("%f", &students.marks);
    }
}