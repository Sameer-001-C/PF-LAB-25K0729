#include <stdio.h>

int main(){
	int num,i =1;
	printf("Please enter a Number: ");
	scanf("%d", &num);
	while(i != num +1){
		printf("%d x %d = %d\n", num,i, num*i);
		i++;
	}
	return 0;
}
