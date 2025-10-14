#include <stdio.h>

int main(){
	int search, i,numEmployee;
	printf("Please enter the number of Employees: ");
	scanf("%d", &numEmployee);
	int employeeID[numEmployee];
	
	for(i = 0; i < numEmployee; i++){
		printf("Enter Employee ID for employee number %d: ", i+1);
		scanf("%d", &employeeID[i]);
	}	
	printf("Please enter an ID to search: ");
	scanf("%d", &search);
	for(i = 0; i < numEmployee; i++){
		if(search == employeeID[i]){
			i = numEmployee;
			printf("Employee Found!");
		}
		else if(i == (numEmployee - 1)){
			printf("Employee not Found!");
		}
	}
	return 0;
}
