#include <stdio.h>

int main(){
	int employeeID[12];
	int search, i;
	
	for(i = 0; i < 12; i++){
		printf("Enter Employee ID:");
		scanf("%d", &employeeID[i]);
	}
	
	printf("Please enter an ID to search:");
	scanf("%d", &search);
	for(i = 0; i < 12; i++){
		if(search == employeeID[i]){
			i = 12;
			printf("Employee Found!");
		}
		else if(i == 11){
			printf("Employee not Found!");
		}
	}
	return 0;
}
