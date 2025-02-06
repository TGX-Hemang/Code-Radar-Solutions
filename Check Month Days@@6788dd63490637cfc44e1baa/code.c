#include <stdio.h>
// 31 days -> 1,3,5,7,8,10,12
char* welcome() {
    int n;
    scanf("%d", &n);
    if (n==1)
    return "31";
    else if (n==2)
    return "28";
    else if (n%2!=0 && n<=7)
    return "31";
    else if (n%2==0 && n<=7)
    return "30";
    else if (n%2==0 && n>=8)
    return "31";
    else if (n%2!=0 && n>=8)
    return "30";
    else
    return "Invalid month";
}

int main() {
    printf("%s", welcome());
    return 0;
}