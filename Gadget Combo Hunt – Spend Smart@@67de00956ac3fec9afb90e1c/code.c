int maxGadgetSpend(int ks[], int nk, int hs[], int nh, int budget) {
    int i, j;
    for(i=0;i<nk;i++) 
    {
        int max = 0;
        for(j=0;j<nh;j++) 
        {
            if (max<ks[i]+hs[j] && max<=budget) {
                max=ks[i]+hs[j];
            }
        }
    }
    return max;
}