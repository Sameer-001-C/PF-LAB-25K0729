/*
Q2. Write a C program that demonstrates how to increase the size of a dynamically allocated array using realloc(). 
	1. First, ask the user how many integers they want to store and allocate memory using calloc() so that 
	   all initial values are set to zero. 
	   
	2. After displaying the initial values, ask the user if they want to enlarge the array, and 
		if yes, take the new size from the user. 
		
	3. Use realloc() to resize the memory block and check whether the reallocation was successful. 
	
	4. Then allow the user to enter additional elements for the newly added positions. 
	
	5. Display the updated array after resizing. 
	
	6. Make sure to free all allocated memory at the end of the program and 
	
	7. include proper comments and user instructions.
*/

#include <stdio.h>
#include <stdlib.h>




int main(){
	
	//	1. First, ask the user how many integers they want to store and allocate memory using calloc() so that 
	//  all initial values are set to zero:
	int numElements;
	printf("Enter Number of Elements: ");
	scanf("%d", &numElements);
	
	int *Elements = calloc(numElements, sizeof(int));
	
	if(Elements == NULL){
		printf("Array allocation failed.\n");
		return 0;
	}
	//Displaying Initial Values: (all set to 0)
	printf("\n--- Initial Values ---\n\n");
	int i;
	for(i = 0; i < numElements; i++){
		printf("Element %d: %d\n", i+1, Elements[i]);
	}
	
	//	2. After displaying the initial values, ask the user if they want to enlarge the array, and 
	//	if yes, take the new size from the user. 
	
	char choice;
	printf("\nDo you want to enlarge the array (y/n): ");
	scanf(" %c", &choice);
	
	int newSize;
	// only take the new size from user if he wants to enlarge the array, else free array and end function
	if(choice == 'y'){
		printf("Enter new size of array: ");
		scanf("%d", &newSize);
		
		//	reallocate the updated new size
		Elements = realloc(Elements, newSize*sizeof(int));
		
		if(Elements == NULL){
			printf("Reallocation Failed.\n");
			return 0;
		}
		
		// ask to enter additional values for the newly added positions only if the new size is greater than the old size
		if(newSize > numElements){
			printf("\n--- Enter New Elements ---\n\n");
			
			//	ask to enter only the remaining values that are newly added. the rest are already initialized to zero
			for(i = numElements; i < newSize; i++){
				printf("Enter Element %d: ", i+1);
				scanf("%d", &Elements[i]);
			}
		}
		
		//displaying the updated array:
		printf("\n--- Updated Array ---\n\n"); //printing the whole updated array only if size was updated
		for(i = 0; i < newSize; i++){
			printf("Element %d: %d\n", i+1, Elements[i]);
		}
	}
	
	free(Elements);
	printf("\nExiting...\n");
	return 0;
}









