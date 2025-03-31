int countGlovePairs(int glove[], int n) {
    int i,j;
    int count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if (glove[i]==glove[j] && i!=j && glove[i]!=-1 && glove[j]!=-1) {
                glove[i] = glove[j] = -1;
                count++;
            }
        }
    }
    return count;
}