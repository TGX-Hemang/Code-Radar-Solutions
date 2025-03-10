#include <stdio.h>

int isPalindrome(int num) {
    int r, result=0, orginalnum = num;

    while(orginalnum!=0) {
        r=orginalnum%10;
        result=result*10+r;
        orginalnum /= 10;
    }
    return (result==num && num>0)?1: 0;
}

int main() {
    int len, count=0;
    scanf("%d", &len);
    int arr[len];
    int i;
    for(i=0;i<len;i++)
    {
        scanf("%d", &arr[i]);
        count += isPalindrome(arr[i]);
    }
    printf("%d", count);
}