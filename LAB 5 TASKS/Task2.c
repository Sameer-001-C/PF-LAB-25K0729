#include <stdio.h>

int main(){
	int age;
	char gender;
	printf("Please enter your Age: ");
	scanf("%d", &age);
	printf("Please enter your Gender: ");
	scanf(" %c", &gender);
	if(age >= 18){
		if(gender == 'm'){
			printf("Adult Male");
		}
		else if(gender == 'f'){
			printf("Adult Female");
		}
		else{
			printf("Invalid Input.");
		}
	}
	else{
		printf("Minor.");
	}
	return 0;
}
