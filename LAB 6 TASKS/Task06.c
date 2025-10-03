#include <stdio.h>

int main(){
	int i, num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("Checking if %d is a prime number:\n", num);
	for(i = 2;i!=num;i++){
		if(num%i==0){
			printf("Not a prime number! (Divisible by %d)", i);
			return 0;
		}
		}
	printf("Prime Number.");
	return 0;
}
