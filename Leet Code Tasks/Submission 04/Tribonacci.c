int tribonacci(int n) {
    int first = 0;
    int second = 1;
    int third = 1;
    int fourth = 2;
    int i;
    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    for(i = 2; i < n; i++){
        fourth = third + second + first;
        first = second;
        second = third;
        third = fourth;
    }
    return fourth;
}
