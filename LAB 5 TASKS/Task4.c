#include <stdio.h>

int main(){
	int choice;
	printf("Key:\n1. Asia\n2. Europe\n\nPlease choose your Continent: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("You choose Asia.\n\nKey:\n1. Pakistan\n2. India\nPlease choose your country: ");
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("You choose Pakistan.");
					break;
				case 2:
					printf("You choose India.");
					break;
				default:
					printf("Invalid Input!");
			}
			break;
		case 2:
			printf("You choose Europe.\n\nKey:\n1. France\n2. Germany\nPlease choose your country: ");
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("You choose France.");
					break;
				case 2:
					printf("You choose Germany.");
					break;
				default:
					printf("Invalid Input!");
			}
			break;
		default:
			printf("Invalid Input!");
	}
	return 0;
}
