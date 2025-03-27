void factorialRange(int start, int end) {
    int i, j;
    if (start<0) {printf("Invalid range"); return;}
    for(i=start;i<=end;i++) {
        int factorial=1;
        for(j=2;j<=i;j++) {
            factorial *= j;
        }
        printf("%d\n", factorial);
    }
}