#include <stdio.h>

int main(){
	int i, flag = 1; //flag = 1 means true (is in ascending order)
	int Arr[10];
	for(i = 0; i < 10; i++){
		printf("Enter element number %d: ", i+1);
		scanf("%d", &Arr[i]);
	}
	for(i = 0; i < 9; i++){
		if(Arr[i] > Arr[i+1]){
			flag = 0;
		}
	}
	if(flag){
		printf("\nArray is in ascending order.");
	}
	else{
		printf("\nArray not in ascending order.");
	}
	return 0;
}
