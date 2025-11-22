int climbStairs(int n) {
    int first = 0;
    int second = 1;
    int third = 1;
    int i;
    for(i = 0; i < n; i++){
        third = second + first;
        first = second;
        second = third;
    }
    return third;
}
