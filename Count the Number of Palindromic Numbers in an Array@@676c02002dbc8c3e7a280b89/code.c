#include <stdio.h>

int isPalindrome(int num) {
    int r, result, orginalnum = num;

    while(orginalnum!=0) {
        r=orginalnum%10;
        result=result*10+r;
        orginalnum /= 10;
    }

    return (result==num);
}

int main() {
    int len, count=0;
    scanf("%d", &len);
    int arr[len];
    int i;
    for(i=0;i<len;i++)
    {
        scanf("%d", &arr[i]);
        count += (isPalindrome(arr[i]))? 1: 0;
    }
    printf("%d", count);
}