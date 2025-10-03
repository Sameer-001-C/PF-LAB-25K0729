#include <stdio.h>
#include <string.h>

int main(){
	char UserInput[] = "1";
	while(strcmp(UserInput, "0") != 0){
		printf("Input: ");
		scanf(" %s",UserInput);
	}
	return 0;
}
