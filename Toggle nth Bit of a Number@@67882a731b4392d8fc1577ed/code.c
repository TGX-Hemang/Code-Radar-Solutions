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
    int arr[32];
    int final_num=0;
    scanf("%d %d", &n, &bit);
    int count = 0, temp;

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
    if (bit>count-1) {
        arr[bit-1]=1;
    }
    int temp1;
    for (int i = 0; i < count / 2; i++) {
    temp1 = arr[i];
    arr[i] = arr[count - 1 - i];
    arr[count - 1 - i] = temp1;
}
    if (bit<=count)
    {if (arr[count-bit-1]==1)
    arr[count-bit-1] = 0;
    else
    arr[count-bit-1] = 1;}


    int temp3 = count-1;
    for (int k=0; k<=count-1; k++) {
        if (arr[k]==1)
        {if (temp3!=0)
        final_num+=power(2, temp3);
        else
        final_num+=1;}
        temp3--;
    }
    
    printf("%d", final_num);  
    return 0;
}