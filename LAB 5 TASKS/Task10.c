#include <stdio.h>

int main(){
	int num;
	printf("Demonstrating bitwise operations.\n");
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("\n\nBitwise Left:\n");
	printf("%d shifted to the left by 1 is: %d",num,num<<1);
	printf("\n\nBitwise Right:\n");
	printf("%d shifted to the right by 1 is: %d", num, num>>1);
	return 0;
}
