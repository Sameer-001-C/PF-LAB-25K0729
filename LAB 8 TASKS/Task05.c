#include <stdio.h>

int main(){
	int i, j, num, character = 65;	
	printf("Please enter the number of rows: ");
	scanf("%d", &num);
	printf("\n");
	
	for(i = 0; i < num; i++){
		for(j = 0; j <= i; j++){
			printf("%c ",character);
			character++;
		}
		printf("\n");
	}
	return 0;
}
