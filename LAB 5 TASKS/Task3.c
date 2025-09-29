#include <stdio.h>

int main(){
	int choice;
	printf("Key:\n\n1. Phone\n2. Laptop\n\nPlease enter your choice: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("\nYou selected phone.\n\nKey:\n1. Samsung\n2. Apple\n\nPlease enter your choice: ");
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("\nYou selected Samsung.");
					break;
				case 2:
					printf("\nYou selected Apple.");
					break;
				default:
					printf("Invalid Input!");
			}
			break;
		case 2:
			printf("\nYou selected Laptop.\n\nKey:\n1. Dell\n2. HP\n\nPlease enter your choice: ");
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("\nYou selected Dell.");
					break;
				case 2:
					printf("\nYou selected HP.");
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
