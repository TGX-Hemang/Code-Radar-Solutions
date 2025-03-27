void factorialRange(int start, int end) {
    int i, j;
    if (start==0 || start==1) printf("1\n");
    for(i=start;i<=end;i++) {
        int factorial=1;
        for(j=2;j<=i;j++) {
            factorial *= j;
        }
        printf("%d\n", factorial);
    }
}