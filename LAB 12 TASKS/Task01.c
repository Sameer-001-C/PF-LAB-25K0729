/*
Q1.  Write a C program that uses to store a list of integers entered by the user. 
The program should 
	1. first ask the user how many elements they want to store, 
	2. then allocate memory using malloc() according to the provided size. After allocating memory, 
	3. take all elements from the user and store them in the dynamically created array. 

	4. Then print the array elements using a loop. 
	5. Also include proper checks such as verifying if malloc() successfully allocated memory or not.
	6. Finally, before ending the program, free all the dynamically allocated memory using free() to avoid memory leaks. 
	
	7. Add helpful messages for user interaction and use clear comments in your code.
*/

#include <stdio.h>
#include <stdlib.h>



int main(){
	//	1. first ask the user how many elements they want to store:
	int numIntegers;
	printf("Enter how many integers you want to store: ");
	scanf("%d", &numIntegers);
	
	
	//	2. Then allocate memory using malloc() according to the provided size:
	int *Elements = malloc(numIntegers * sizeof(int)); //provided size is stored in "numIntegers"
	
	
	//	5. Also include proper checks such as verifying if malloc() successfully allocated memory or not:
	if(Elements == NULL){
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	
	//	3. take all elements from the user and store them in the dynamically created array:
	printf("\n--- Elements Entry ---\n\n"); //	7. Add helpful messages for user interaction.

	int i;
	for(i = 0; i < numIntegers; i++){
		printf("Enter Element %d: ", i+1);
		scanf("%d", &Elements[i]);
	}
	
	
	//	4. Then print the array elements using a loop:
	printf("\n\n--- Displaying Elements Entered ---\n\n"); //	7. Add helpful messages for user interaction.
	for(i = 0; i < numIntegers; i++){
		printf("Element %d: %d\n", i+1, Elements[i]);
	}
	
	
	//	6. Finally, before ending the program, free all the dynamically allocated memory using free() to avoid memory leaks.
	free(Elements);
	
	return 0;
}


