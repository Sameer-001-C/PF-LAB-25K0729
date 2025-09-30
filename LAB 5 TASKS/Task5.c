#include <stdio.h>

int main(){
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	if(num%2 == 0 && num%3 == 0){
		printf("\nDivisible by Both, 2 And 3.");
	}
	else{
		printf("\nNot Divisible By 2 And 3.");
	}
	return 0;
}
