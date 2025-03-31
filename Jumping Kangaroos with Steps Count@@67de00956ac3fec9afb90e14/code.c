int kangaroo(int x1, int v1, int x2, int v2) {
    int n = ((x2-x1<0)? x1-x2: x2-x1)/((v2-v1<0)? v1-v2: v2-v1);
    return n;
}