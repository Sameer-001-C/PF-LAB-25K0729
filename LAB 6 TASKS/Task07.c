#include <stdio.h>

int main() {
    int i, firstNum = 0, secondNum = 1, newNum;

    printf("%d\n", firstNum);
    printf("%d\n", secondNum);

    for(i = 2; i < 10; i++){
        newNum = firstNum + secondNum;
        printf("%d\n", newNum);
        firstNum = secondNum;
        secondNum = newNum;
    }

    return 0;
}
