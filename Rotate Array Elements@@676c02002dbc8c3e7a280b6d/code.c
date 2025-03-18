#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[num];
    for(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    int k;
    scanf("%d" , &k);
    int i, temp[k]; 
    int count=0;
    for(i=k+1;i<num;i++){
        temp[count]=arr[i];
        count++;
    }
    for(i=0;i<=k;i++) {
        arr[count]=arr[i];
        count++;
    }
    for(i=k+1;i<num;i++) {
        arr[i]=temp[i];
    }
    for(i=0;i<num;i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}