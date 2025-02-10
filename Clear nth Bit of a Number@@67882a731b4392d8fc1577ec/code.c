#include <stdio.h>
int power(int a,int b) {
    int ret=1;
    for (int i=1; i<=b; i++) {
        ret *= a;
    }
    return ret;
}

int main() {
    int n, bit;
    int arr[10];
    int final_num=0;
    scanf("%d %d", &n, &bit);
    int count = 0, temp;
    // if (n==0)
    // {printf("0");
    // return 0;}
    while (n != 0) {
        temp = n%2;
        if (temp==1) 
        {
        arr[count] = 1;}
        else 
        {
        arr[count] = 0;}
        count++;
        n /= 2;
    }
    
    for (int i=count-1; i>=0; i--) {
        for (int j=0; j<=count; j++) {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    // 10011
    // 01111
    // 111 -? 101
    // 100
    if (arr[count-bit]==1)
    arr[count-bit] = 0;

    temp = count;
    for (int k=0; k<=count-1; k++) {
        if (arr[k]==1)
        {if (temp!=0)
        final_num+= power(2, temp);
        else
        final_num+=1;}
        temp--;
    }
    printf("%d", final_num);
    return 0;
}