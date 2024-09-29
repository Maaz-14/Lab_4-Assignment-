#include<stdio.h>
int main(){
	int temperature;
	printf("Enter Temperature: ");
	scanf("%d",&temperature);
	if (temperature<0)
	printf("Freezing weather!");
	else if(temperature<=10)
	printf("Very cold weather!");
	else if (temperature<=20)
	printf("Cold weather!");
	else if (temperature<=30)
	printf("Normal weather!");
	else if(temperature<=40)
	printf("Hot weather!");
	else
	printf("Very hot weather!");

	return 0;	
}
