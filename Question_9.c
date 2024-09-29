#include<stdio.h>
int main(){
	float Fsc,NTS;
	printf("Input you Fsc percentage: ");
	scanf("%f",&Fsc);
	printf("Input you NTS percentage: ");
	scanf("%f",&NTS);
	if(Fsc>0.70 && NTS>=0.70)
	printf("You are selected for IT department at Oxford University!");
	else if(Fsc>0.70 && NTS>=0.60)
	printf("You are selected for Electronics department at Oxford University!");
	else if(Fsc>0.70 && NTS>=0.50)
	printf("You are selected for Telecommunication department at Oxford University!");
	else if((Fsc>=0.60&&Fsc<=0.70)&&(NTS>=0.50))
	printf("You are selected for IT department at MIT University!");
	else if((Fsc>=0.50 && Fsc<=0.59)&&(NTS>=0.50))
	printf("You are selected for Chemical department at MIT University!");
	else if((Fsc>0.40 && Fsc<0.50)&& (NTS>=0.50))
	printf("You are selected for Computer department at MIT University!");
	else
	printf("You are not selected at any university :( ");
	
}
