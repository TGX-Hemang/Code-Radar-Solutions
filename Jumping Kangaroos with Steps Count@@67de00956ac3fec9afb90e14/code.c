int kangaroo(int x1, int v1, int x2, int v2) {
    int x = x1 - x2;
    int v = v2 - v1;
    int n=-1;
    if ( (x>0 && v>0) || (x<0 && v<0) )
    n = x/v;
    return n;
}