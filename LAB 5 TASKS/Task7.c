#include <stdio.h>

int main(){
	int num1, num2, num3, smallest;
	printf("Please enter your first number: ");
	scanf("%d", &num1);
	printf("Please enter your second number: ");
	scanf("%d", &num2);
	printf("Please enter your third number: ");
	scanf("%d", &num3);
	smallest = (num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
	printf("Smallest number is %d", smallest);
	return 0;
}
