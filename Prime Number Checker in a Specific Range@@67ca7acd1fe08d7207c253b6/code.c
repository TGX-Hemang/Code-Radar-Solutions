void printPrimesInRange(int a, int b) {
    int r,c, count=0;
    for(r=a; r<=b; r++) 
    {
        for(c=2; c<=r-1; c++) {
            if (r%c==0)
            {
                break;
            }
        }
        if (c==r) printf("%d ", r);
        else count++;
    }
}