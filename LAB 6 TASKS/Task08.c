#include <stdio.h>

int main(){
	int num, reversed = 0, remainder, initial;
	printf("Please enter a number: ");
	scanf("%d", &num);
	initial = num;
	while(num != 0){
		remainder = num%10;
		reversed = reversed*10 + remainder;
		num/=10;
	}
	if(reversed == initial){
		printf("Is a Palindrome.");
	}
	else{
		printf("Is not a Palindrome.");
	}
	return 0;
}
