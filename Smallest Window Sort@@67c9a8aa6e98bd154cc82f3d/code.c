int findUnsortedSubarray(int arr[], int n) {
    int i,count=0;
    for(i=0;i<n;i++) {
        index = (i+1>n)?n-1:i+1;
        if (arr[i]>arr[index] || arr[i]<arr[index] || arr[i]==arr[index])
        count++;
    }
    return count;
}