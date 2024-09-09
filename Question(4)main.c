#include<stdio.h>
int main(){
	float amount, cost_after_discount;
	printf("Enter the cost of items: ");
	scanf("%f",&amount);

	if(amount<2000){	
		cost_after_discount=amount*(0.95);
	}
	else if (amount>=2000 && amount<=4000){
		cost_after_discount=amount*(0.90);
	}
	else if (amount>=4000 && amount<=6000 ){
		cost_after_discount=amount*(0.80);		
	}                                    

	else if (amount>6000){
		cost_after_discount=amount*(0.65);
	}                       
	printf("%.2f is the amount after discount",cost_after_discount);
	return 0;
}
		
	 
	  
