#define MIN -99999999

int kthSmallest(int arr[], int n, int k){
    int max=MIN,max_i,i;
    while (k--)
    { 
        for(i=0;i<n;i++) {
            if (max<arr[i]) max=arr[i], max_i=i;
        }
        arr[max_i]=MIN;
        max=MIN;
    
    return max;}
}   