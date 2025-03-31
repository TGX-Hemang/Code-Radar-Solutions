int finalEnergy(int clouds[], int n, int k) {
    int i;
    int energy = 100;
    for(i=0;i<n;i+=k) {
        energy -= (clouds[i]==1)?3:1;
    }
    return energy;
}