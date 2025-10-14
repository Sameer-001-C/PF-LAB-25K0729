#include <stdio.h>

int main(){
	int num, i, remove, temp, newnum;
	printf("Please enter the size of Array: ");
	scanf("%d", &num);
	printf("\n");
	int MyArr[num];
	for(i = 0; i < num; i++){
		printf("Please enter Element Number %d:", i+1);
		scanf("%d", &MyArr[i]);		
	}
	printf("What element do you want to remove from the Array?: ");
	scanf("%d", &remove);
	for(i = 0; i < num; i++){
		if(MyArr[i] == remove){ //now remove, MyArr[i] = MyArr[i+1]
			temp = i;
			for(temp; temp < num; temp++){
				MyArr[temp] = MyArr[temp + 1];				
			}
			MyArr[num - 1] = 0;
			num--;
			i--;
		}
	}
	printf("Array after removing %d:\n", remove);
	printf("S.No\tElement\n");
	for(i = 0; i < num; i++){
		printf("%d\t%d\n", i+1, MyArr[i]);
	}
	return 0;
}
