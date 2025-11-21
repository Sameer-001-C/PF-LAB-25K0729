#include <string.h>

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    char *vowels = "aeiouAEIOU"; 

    while (left < right) {
            
        if (!strchr(vowels, s[left])) {
            left++;
            continue;
        }
  
        if (!strchr(vowels, s[right])) {
            right--;
            continue;
        }     
        char temp = s[left];

        s[left] = s[right];
        s[right] = temp;    

        left++;
        right--;
    }
    return s;
}
