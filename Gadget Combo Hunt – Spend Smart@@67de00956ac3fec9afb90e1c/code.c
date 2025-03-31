int maxGadgetSpend(int ks[], int nk, int hs[], int nh, int budget) {
    int i, j, max=-1;
    for(i=0;i<nk;i++) 
    {
        for(j=0;j<nh;j++) 
        {
            if (max<ks[i]+hs[j] && ks[i]+hs[j]<=budget) {
                max=ks[i]+hs[j];
            }
        }
    }
    return max;
}