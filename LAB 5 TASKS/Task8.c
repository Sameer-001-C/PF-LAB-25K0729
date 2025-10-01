#include <stdio.h>

int main(){
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	num = num^2;
	printf("Number after 2nd bit has been toggled: %d", num);
	return 0;
}
