#include <stdio.h>

int main(){
	int num, i, temp;
	printf("Please enter the total numbers you would insert: ");
	scanf("%d", &num);
	int MyArr[num];
	for(i = 0; i < num; i++){
		printf("Please enter Number %d: ", i+1);
		scanf("%d", &MyArr[i]);
	}
	printf("\nYour Original Array:\n");
	printf("S.No\tElement\n");
	for(i = 0; i < num; i++){
		printf("%d\t%d\n", i+1, MyArr[i]);
	}
	temp = MyArr[num-1];
	for(i = num - 1; i > 0; i--){ //assuming array size to be 5, so num - 1 would be 4 (value of i, which is the last index), so store at this index the value of previous index
		MyArr[i] = MyArr[i-1];
	}
	MyArr[0] = temp;
	printf("\nAfter shifting everything to the right:\n");
	printf("S.No\tElement\n");
	for(i = 0; i < num; i++){
		printf("%d\t%d\n", i+1, MyArr[i]);
	}	
	return 0;
}
