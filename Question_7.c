#include<stdio.h>
int main(){
	int intensity;
	printf("Light Sensor Value: ");
	scanf("%d",&intensity);
	if (intensity>1000||intensity<0){
		printf("Invalid sensor value...");
	}
	else if(intensity>500){
		printf("It's under Sunshine!!");
	}
	else if(intensity>=100 &&intensity<=500){
		printf("It's under lightning!!");
		
	}
	else if (intensity<100){
		printf("It's evening!!");
	}
	return 0;
}
