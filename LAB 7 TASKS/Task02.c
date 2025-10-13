#include <stdio.h>

int main(){
	int marks[10], i, average, sum,num;
	
	for(i = 0; i < 10; i++){
		num = i+1;
		printf("Enter marks for Student number %d: ", num);
		scanf("%d", &marks[i]);
		sum+= marks[i];
	}
	average = sum/10;
	printf("Average is: %d", average);
	return 0;
}
