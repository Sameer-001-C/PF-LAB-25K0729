#include <stdio.h>

int main(){
	int i, j, sum;
	int temperature[7][3]; // 7 days and 3 shifts
	int average[7];
	for(i = 0; i < 7; i++){ //taking input from the user
		sum = 0; //initialize total temperature (sum) to zero at the start of each day
		for(j = 0; j < 3; j++){						
			switch(j){
				case 0: //morning shift
					printf("Please enter temperature for day %d's morning shift: ", i+1);
					break;
				case 1: //afternoon shift
					printf("Please enter temperature for day %d's afternoon shift: ", i+1);
					break;
				case 2: //night shift
					printf("Please enter temperature for day %d's night shift: ", i+1);
					break;			
			}
			scanf("%d", &temperature[i][j]);
			sum += temperature[i][j];
		}
		average[i] = sum/3;
	}
	printf("\nDay\tMorning\t\tAfternoon\tNight\n\n");
	for(i = 0; i < 7; i++){	
		printf("%d\t", i+1);
		for(j = 0; j < 3; j++){
			printf("%d\t\t", temperature[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 7; i++){
		printf("Average temperature for day %d: %d\n", i+1, average[i]);
	}
	return 0;
}
