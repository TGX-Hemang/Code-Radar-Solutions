void printPrimesInRange(int a, int b) {
    if (a==0 || b==0|| b==1||a==1) printf("No prime numbers");
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
    if (count==b-a+1) printf("No prime numbers");
}