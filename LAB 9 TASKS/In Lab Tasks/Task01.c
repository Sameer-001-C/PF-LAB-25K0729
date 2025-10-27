#include <stdio.h>

float calculateInterest(float principal, float rate, float time){
	float interest;
	interest = principal * rate * time;
	return interest;
}

float updateBalance(float balance, float interest){
	balance += interest;
	return balance;
}

int main(){
	float balance, rate, interest, time;
	printf("Please enter current balance: ");
	scanf("%f", &balance);
	printf("Please enter interest rate (annual): ");
	scanf("%f", &rate); //rate is annual
	rate/=100; //change into percentage
	printf("Please enter time (in years): ");
	scanf("%f", &time); // time in years always
	
	interest = calculateInterest(balance, rate, time);
	
	balance = updateBalance(balance, interest);
	printf("Total interest: %.2f\n", interest);
	printf("Updated Balance: %.2f", balance);
	
	return 0;
}
