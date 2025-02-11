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
    // printf("Binary: ");
    // for (int ik=0; ik<=31; ik++) {
    //     printf("%d", arr[ik]);
    // }

    if (arr[bit]==1)
    arr[bit]-=1;
    else 
    arr[bit]+=1;

    // printf("\nBinary: ");
    // for (int ik=0; ik<=31; ik++) {
    //     printf("%d", arr[ik]);
    // }

    int temp1;
    for (int i = 0; i < count / 2; i++) {
    temp1 = arr[i];
    arr[i] = arr[count - 1 - i];
    arr[count - 1 - i] = temp1;
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