char* caesarCipher(char msg[], int shift, char encrypted[]) {
    int i, count=0;
    for(i=0;i<100;i++) {
        encrypted[i]=msg[i]+shift;
    }
    return encrypted;
}