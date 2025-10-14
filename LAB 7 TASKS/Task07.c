#include <stdio.h>

int main(){
	int i = 0, index = 0, temp, sum = 0;
	char MyArr[100];
	int MyDigit[100];
	printf("Please enter a string: ");
	scanf("%s", MyArr);
	while(MyArr[i] != '\0'){
		temp = MyArr[i]-'0';
		if(temp >= 0 && temp <= 9){
			MyDigit[index] = temp;			
			sum += temp;
			index++;	
		}
	i++;
	}
	for(i = 0; i < index;i++){
		printf("%d\n", MyDigit[i]);
	}
	printf("Sum = %d", sum);
	return 0;
}
