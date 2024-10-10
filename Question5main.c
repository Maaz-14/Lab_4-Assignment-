#include <stdio.h>

int main() {
  int customerId, unitConsumed;
  char customerName[50];
  float billAmount, surcharge, Amount, AmountCharges;

  printf("Enter customer ID: ");
  scanf("%d", &customerId);

  printf("Enter customer name: ");
  scanf("%s", &customerName); // %s is used to avoid error

  printf("Enter units consumed: ");
  scanf("%d", &unitConsumed);

  if (unitConsumed <= 199) {
  	AmountCharges=16.20;
  	Amount=unitConsumed * 16.20;
    billAmount = unitConsumed * 16.20;
  } else if (unitConsumed>=200&&unitConsumed <= 299) {
  	AmountCharges=20.10;
  	Amount=unitConsumed * 20.10;
    billAmount = unitConsumed * 20.10;
  } else if (unitConsumed>=300&&unitConsumed <= 499) {
  	AmountCharges=27.10;
  	Amount=unitConsumed * 27.10;
    billAmount = unitConsumed * 27.10;
  } else if  (unitConsumed>=500) {
  	AmountCharges=35.90;
	Amount=unitConsumed * 35.90;
  	
    billAmount = unitConsumed * 35.90;
  }

  if (billAmount > 18000) {
    surcharge = billAmount * 0.15;
    billAmount += surcharge;
  }

  
  printf("\nElectricity Bill\n");
  printf("Customer ID: %d\n", customerId);
  printf("Customer Name: %s\n", customerName); // %s is used to avoid error
  printf("Units Consumed: %d\n", unitConsumed);
  printf("Amount Charges Rs %.2f per unit:\n ",AmountCharges);
  printf("%.0f\n",Amount);
  printf("Surcharge Amount: %.0f\n",surcharge);
  printf("Net Amount Paid by the Customer: \nRs. %.2f\n", billAmount);

  return 0;
}
