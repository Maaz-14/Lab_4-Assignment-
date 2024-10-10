#include<stdio.h>
int main(){
	int actual_amount;
	float saved_amount,amount_after_discount;
	printf("Enter the amount: ");
	scanf("%d",&actual_amount);
	if(actual_amount>=500 && actual_amount<2000){
		saved_amount=actual_amount*0.05;
		amount_after_discount=actual_amount-saved_amount;
	}
	else if(actual_amount>=2000 && actual_amount<4000){
		saved_amount=actual_amount*0.10;
		amount_after_discount=actual_amount-saved_amount;
	}
	else if(actual_amount>=4000&&actual_amount<6000){
		saved_amount=actual_amount*0.20;
		amount_after_discount=actual_amount-saved_amount;
	}
	else if(actual_amount>=6000){
		saved_amount=actual_amount*0.35;
		amount_after_discount=actual_amount-saved_amount;
	}
	else if (actual_amount>0 && actual_amount<500){
		printf("Not eligible for discount\n.");
		
	}
	else
	printf("Invalid Amount!\n");
	printf("Actual amount: %d",actual_amount);
	printf("\nSaved amount: %.2f",saved_amount);
	printf("\nAmount after discount: %.2f",amount_after_discount);
	return 0;
}
