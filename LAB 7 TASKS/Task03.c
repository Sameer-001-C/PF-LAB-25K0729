#include <stdio.h>

int main(){
	int Ages[8], i, min = 1000, participantnumber, num;
	
	for(i = 0; i<8; i++){
		num = i + 1;
		printf("Please enter the age of participant number %d: ", num);
		scanf("%d", &Ages[i]);
		if(Ages[i] < min){
			min = Ages[i];
			participantnumber = num;
		}		
	}
	printf("Participant %d is the youngest, with the age of %d", participantnumber, min);
	return 0;
}
