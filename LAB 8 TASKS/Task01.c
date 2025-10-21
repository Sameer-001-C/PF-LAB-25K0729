#include <stdio.h>

//assuming that user enters an array that has no repeated values
//(if this is not the assumtion, then we could create a function that would first remove any duplicates from our array.)
int main(){ 
	int i, j, element, duplicates = 0, lastIndex = 0, size, size1, size2;
	printf("Please enter size of first array: ");
	scanf("%d", &size1);
	printf("Please enter size of second array: ");
	scanf("%d", &size2);
	int Array1[size1];
	int Array2[size2];
	printf("Please enter elements for first array:\n");
	for(i = 0; i < size1; i++){
		printf("Enter element number %d: ", i+1);
		scanf("%d", &Array1[i]);
	}
	printf("Please enter elements for second array:\n");	
	for(i = 0; i < size2; i++){
		printf("Enter element number %d: ", i+1);
		scanf("%d", &Array2[i]);
	}
		
	size = size1 + size2;
	int finalArray[size];
	
	for(i = 0; i < size1; i++){
		finalArray[i] = Array1[i]; //copying all elements from Array1 to the finalArray
		lastIndex++;
	}
	
	for(i = 0; i < size2; i++){
		element = Array2[i];
		for(j = 0; j < size1; j++){
			if(element == finalArray[j]){
				duplicates = 1; //flags as true if there are any duplicates
			}
		}
		if(duplicates == 0){ //if there are no duplicates, add that element to the finalArray
			finalArray[lastIndex] = element;
			lastIndex++;
		}
		duplicates = 0; //resets to 0, to perform the next cycle of checking for the second element in the second array
	}
	printf("Union of both the arrays:\n");
	for(i = 0; i < lastIndex; i++){ //displaying all the elements of the final union array
		printf("%d ", finalArray[i]);
	}
	return 0;
}
