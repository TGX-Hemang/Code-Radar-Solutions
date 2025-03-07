int findOccurrence(int arr[], int n, int target, char mode) {
    int i, count=0;
    if (mode=='F')
    {
        for(i=0;i<n;i++) {
            if (arr[i]==target) 
                return i;
        }
    }
    else if (mode=='L') {
        for(i=n-1;i>0;i--) {
            if (arr[i]==target) 
            return i;
        }
    }
    return -1;
}