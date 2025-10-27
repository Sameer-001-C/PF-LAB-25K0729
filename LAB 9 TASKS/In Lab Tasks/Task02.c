#include <stdio.h>

float calculateTotal(float cart[], int size){
	float total = 0;
	int i;
	for(i = 0; i < size; i++){
		total += cart[i];
	}
	return total;
}

float applyDiscount(float total){
	if(total > 5000){
		total*=0.9;
	}
	return total;
}

void printBill(float cart[], int size, float total){
	printf("Total Price: %.2f", total);
}

int main(){
	int size, i;
	float total;
	
	printf("Please enter the total number of items in cart: ");
	scanf("%d", &size);
	float cart[size]; //declaring an array that would store the prices of all the items
	
	for(i = 0; i < size; i++){ //taking input for all the prices of the items
		printf("Please enter price for item number %d: ", i+1);
		scanf("%f", &cart[i]);
	}
	
	total = calculateTotal(cart, size);
	total = applyDiscount(total);
	
	printBill(cart, size, total);
	
	return 0;
}
