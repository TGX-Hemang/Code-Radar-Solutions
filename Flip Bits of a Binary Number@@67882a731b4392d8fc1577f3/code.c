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

    for (int p1=0; p1<=31; p1++) {
        arr[p1]=0;
    }

    while (n != 0) {
        temp = n%2;
        if (temp==1) 
        {
        arr[count] += 1;}
        count++;
        n /= 2;
    }

    int temp1;
    for (int i = 0; i < 32 / 2; i++) {
    temp1 = arr[i];
    arr[i] = arr[32 - 1 - i];
    arr[32 - 1 - i] = temp1;
}
    for (int o=0; o<=31; o++) {
        arr[o] = ~arr[o];
    }
    int temp3 = 31;
    for (int k=0; k<=31; k++) {
        if (arr[k]==1)
            {
                if (temp3!=0)
                    final_num+=power(2, temp3);
                else
                    final_num+=1;
                    }
        temp3--;
    }
    
    printf("%d", final_num);  
    return 0;
}