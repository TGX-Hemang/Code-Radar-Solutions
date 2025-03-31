int finalEnergy(int clouds[], int n, int k) {
    int i;
    int energy = 100;
    for(i=0;i<n;i+=k) {
        if (clouds[i]==1 && i==0) energy -= 2;
        energy -= (clouds[i]==1 && i!=0)?3:1;
    }
    return energy;
}