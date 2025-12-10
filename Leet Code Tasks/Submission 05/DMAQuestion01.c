/*
QUESTION 1 (important)
Write a C program that creates a 2D dynamic array with 10 rows.
 The number of rows is fixed (10), but the number of columns for each row must be decided by the user, one row at a time.
 
Your program must:

	1. Ask the user 10 times to input an integer n.

		n represents how many columns will be allocated for that row.


	2. Dynamically allocate exactly n integers for that row.


	3. Fill the entire row with the row index, where indices start from 1.


		Row 1 should be filled with 1

		Row 2 should be filled with 2

		...

		Row 10 should be filled with 10


	4. After all 10 inputs are processed, print the entire 2D array.


	5. Make sure memory is properly freed.

*/


//plan:

//okay so, basically we have a 2D array which is not necessarily symmetrical

// we must first declare something that is a pointer to a columns
//like, it would contain addresses of the cols

// so like, 10 spaces:

/*
1 at this, we'll have address to a size "x" columns,
2
3
4
5
6
7
8
9
10
*/





#include <stdio.h>
#include <stdlib.h>



int main(){
	int **row = malloc(10*sizeof(int*));
	
	if(row == NULL){
		printf("Memory allocation failed.\n");
		return 0;
	}
	
	int num;
	int i;
	int rowSize;
	int j;
	
	int sizes[10]; //sizeof does not work in DMA, so will be using an array to store the size of each row for displaying later
	
	printf("\n--- Columns Setting ---\n\n");
	printf("Enter the size of each row one by one:\n");
	for(i = 0; i < 10; i++){
		printf("Enter size of row %d: ", i+1);
		scanf("%d", &rowSize);
		
		sizes[i] = rowSize;
		
		int *temp = malloc(rowSize * sizeof(int));
		
		if(temp == NULL){
			printf("Memory allocation failed for row %d", i+1);
			return 0;
		}
		row[i] = temp;
		
		for(j = 0; j < rowSize; j++){
			row[i][j] = i+1;
		}
			
	}
	
	printf("\n--- Displaying the 2D array ---\n\n");
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < sizes[i]; j++){
			printf("Array[%d][%d] = %d\n", i,j, row[i][j]);
		}
	}
	
	//freeing memory:
	
	for(i = 0; i < 10; i++){
		free(row[i]);
	}
	free(row);
	
	return 0;
}







