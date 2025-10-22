#include <stdio.h>

//we assume that there are no duplicates in either of the arrays that the user enters the data for.
//if there are any duplicates to be expected, unlike the example shared in the task, then would could create a function that would first remove any duplicates from both arays.

int main(){
	int i, j, size1, size2, size, lastIndex = 0;
	printf("Please enter size of first array: ");
	scanf("%d", &size1);
	printf("Please enter size of second array: ");
	scanf("%d", &size2);	
	int Array1[size1];
	int Array2[size2];
	size = size1 + size2;
	int finalArray[size];
	
	printf("Please enter elements in first array:\n");
	for(i = 0; i< size1; i++){
		printf("Please enter element number %d: ", i+1);
		scanf("%d", &Array1[i]);
	}

	printf("Please enter elements in second array:\n");
	for(i = 0; i< size2; i++){
		printf("Please enter element number %d: ", i+1);
		scanf("%d", &Array2[i]);
	}
	
	for(i = 0; i < size1; i++){ //Array1[i] will first select first element of Array1 and see if it is present anywhere in Array2, then repeat for second element of Array1 and so on..
		for(j = 0; j < size2; j++){
			if(Array1[i] == Array2[j]){
				finalArray[lastIndex] = Array1[i];
				lastIndex++;
			}
		}
	}
	printf("Interesection of both the arrays:\n");
	for(i = 0; i < lastIndex; i++){
		printf("%d ", finalArray[i]);
	}
	return 0;
}
