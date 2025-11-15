void reverseString(char* s, int sSize) {
    int n = sSize/2;
    int i;
    char temp;

    for(i = 0; i < n; i++){ //reverse
        temp = s[i];
        s[i] = s[sSize-i-1];
        s[sSize-i-1] = temp;
    }
}
