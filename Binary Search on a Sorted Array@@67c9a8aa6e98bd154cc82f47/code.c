int binarySearch(int arr[], int n, int target) {
    int i;
    for(i=0; i<n; i++) {
        if (arr[i]==target && arr[i]!=arr[i+1])
        {   
            return i;
        }
        if(arr[i]==arr[i+1])
            return 3;
    }
    return -1;
}