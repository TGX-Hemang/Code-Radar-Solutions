int findUnsortedSubarray(int arr[], int n) {
    int i,count=0;
    for(i=0;i<n;i++) {
        if (arr[i]>arr[i+1] || arr[i]<arr[i-1] || arr[i]==arr[i+1])
        count++;
    }
    return count;
}