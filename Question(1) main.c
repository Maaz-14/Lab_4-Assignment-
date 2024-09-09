#include<stdio.h>
int main(){
	int Number;
	printf("Input a number: ");
	scanf("%d",&Number);
	// MOD %
	if (Number %3==0){
		printf("%d is multiple of 3 ",Number);
	}
	else {
		printf("%d is not multiple of 3 ",Number);
	}
	return 0;
}