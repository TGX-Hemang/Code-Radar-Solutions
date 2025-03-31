int kangaroo(int x1, int v1, int x2, int v2) {
    int x = x2 - x1;
    int v = v2 - v1;
    int n;
    if (x>0 && v>0) n = (int) x / v;
    return n;
}