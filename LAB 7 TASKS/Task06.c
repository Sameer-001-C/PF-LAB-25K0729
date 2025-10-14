#include <stdio.h>

int main(){
	int num, sum = 0, i;
	printf("Please enter number of days: ");
	scanf("%d", &num);
	printf("\n");
	int MyArr[num];
	for(i = 0; i < num; i++){
		printf("Please enter Profit/Loss for day number %d: ", i+1);
		scanf("%d", &MyArr[i]);		
	}
	for(i = 0; i < num; i++){
		if(MyArr[i] > 0){
			sum +=MyArr[i];
		}
	}
	printf("Total Profit: %d", sum);
	return 0;
}
