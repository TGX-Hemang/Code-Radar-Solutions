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
    for(i=num-1;i>k+1;i--){
        temp[count++]=arr[i];
    }
    for(i=0;i<k;i++) {
        arr[count++]=arr[i];
    }
    for(i=0;i<k;i++) {
        arr[i]=temp[i];
    }
    for(i=0;i<num;i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}