void bubbleSort(int arr[], int n) {

    for (int j=0; j<n; j++) {
        for (int i=0; i<n-1-j; i++) 
        {
            if (arr[i+1]<arr[i])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}