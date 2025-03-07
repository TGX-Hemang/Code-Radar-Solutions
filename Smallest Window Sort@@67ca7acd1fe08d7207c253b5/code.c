int findUnsortedSubarray(int arr[], int n) {
    int i, count=0;
    for(i=0; i<n; i++) {
        if (!(arr[i]<arr[(i+1)<n?i+1: 0]))
        count++;
    }
    return count;
}