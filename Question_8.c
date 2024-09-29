#include<stdio.h>
int main(){
	int time;
	printf("Enter time in 24 hour format: ");
	scanf("%d",&time);
	if (time>24 || time<0){
		printf("Invalid Time...");
	
	}
	else if (time>5 && time<11){
		printf("Good Morning!!");
	
	}
	else if(time>12 && time<18){
		printf("Good Evening!!");
	}
	else if(time>18 && time<24){
		printf("Good Night!!");
	}

	return 0;
}



