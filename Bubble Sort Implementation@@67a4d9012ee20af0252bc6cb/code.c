bubbleSort(int arr[n], int n) {
    int temp;
    for (int j=0; j<n/2; j++) {
        for (int i=0; i<n/2; i++) {
            if (arr[i-1]>arr[i])
                temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
        }}
}

printArray(int arr[n],int n) {
    for (int i=1; i<n; i++) {
        printf("%d ", arr[i]);
    }
}