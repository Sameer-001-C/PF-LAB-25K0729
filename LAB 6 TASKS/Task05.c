#include <stdio.h>

int main(){
	int num, fact =1;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("Calculating Factorial of %d:\n", num);
	for(;num!=1;num--){
		fact = fact * num;
	}
	printf("Answer: %d", fact);
	return 0;
}
