#include <stdio.h>

int main(){
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	if(num & 1){
		printf("%d is Odd.", num);
	}
	else{
		printf("%d is Even.", num);
	}
	return 0;
}
