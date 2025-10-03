#include <stdio.h>

int main(){
	int num, power=10, reversed = 0, remainder, initial; /*  123321 (even digits) or 1234321 (odd digits) use bitwise prolly. if left shift performed, can i break into binary?
	
	121 binary: 64,32,16,8,4,2,1
	            1, 1, 1, 1,0,0,1
	            
	if i use modulus?
	mod 10 is 1
	mod 100 is 21  (subtract previous num, then divide by 10, result: 2)
	mod 1000 is 121  (if mod num == num, end loop)  (subtract previous nums, with their respective base, then divide by 100)
	
	abovve one only works with arrays probably
	
	we can first reverse a number too
	
	example: 1234321 (will use loop)
	mod 10 gives 1, which is first number
	
	store the above in a variable, reverse
	remainder = mod%10
	reverse = remainder
	if divide by 10, gives, 123432
	
	repeat above
	
	123432
	mod 10 gives 2, which is second digit
	first multiply the reversed by 10, then add remainder
	reversed = reversed *10 + remainder
	
	now repeat again:
	until:
	1 is left as the value of num
	if divided by 10 again, gives 0, so condition to stop must be: num == 0
	
	*/
	printf("Please enter a number: ");
	scanf("%d", &num);
	initial = num;
	while(num != 0){
		remainder = num%10;
		reversed = reversed*10 + remainder;
		num/=10;
	}
	if(reversed == initial){
		printf("Is a Palindrome.");
	}
	else{
		printf("Is not a Palindrome.");
	}
	return 0;
}
