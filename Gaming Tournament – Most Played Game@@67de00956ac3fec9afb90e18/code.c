int indexInArray(int arr[], int target, int max) {
    int i;
    for(i=0;i<max;i++) {
        if (target==arr[i]) {
            return i;
        }
    }
    return -1;
}

int mostPlayedGame(int games[], int n) {
    int count[n];
    int i, c=0;
    for(i=0;i<n;i++) {
        int counted = indexInArray(count, games[i], n);
        if (!counted) {
            count[c]=games[i];
            c+=2;
        }
        else {
            count[counted+1]+=1;
        }
    }
    int max = -9999999, max_i;
    for(i=1;i<n;i+=2) {
        // printf("%d %d\n", count[i], count[i+1]);
        if (max<count[i]) max=count[i], max_i=i-1;
    }
    return count[max_i];
}