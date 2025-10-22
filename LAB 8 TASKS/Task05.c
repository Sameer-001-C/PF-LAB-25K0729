#include <stdio.h>

int main(){
	int marks[5][3] = {{80, 75, 90}, {60, 70, 65}, {78, 82, 88}, {92, 85, 89}, {55, 60, 58}};
	int totalMarks[5] = {0}; //total marks for each student
	float averageMarks[3] = {0}; //average marks for each subject
	int i,j;
	
	for(i=0; i < 5; i++){ //i represents students
		for(j=0; j < 3; j++){ //j represents subject
			totalMarks[i]+= marks[i][j];
		}
		printf("Total marks for student %d: %d\n", i+1, totalMarks[i]);
	}
	printf("\n");
	for(j=0; j < 3; j++){ 
		for(i=0; i < 5; i++){ 
			averageMarks[j] += marks[i][j];
		}
		averageMarks[j] /=5;
		printf("Average marks for subject %d: %.2f\n", j+1, averageMarks[j]);		
	}	
	return 0;
}
