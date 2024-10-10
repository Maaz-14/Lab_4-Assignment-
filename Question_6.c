#include<stdio.h>
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if (n==1){
		printf("One");
	}
	else if (n==2){
		printf("Two");
		
	}
	else if(n==3)
	printf("Three");
	else if (n==4)
	printf("Four");
	else if (n==5)
	printf("Five");
	else if(n==6)
	printf("Six");
	else if (n==7)
	printf("Seven");
	else if (n==8)
	printf("Eight");
	else if (n==9)
	printf("Nine");
	else if (n>9)
	printf("Number greater than 9");
return 0;	
}
//OR
// #include<stdio.h>
// int main(){
// 	int n;
// 	printf("Input number: ");
// 	scanf("%d",&n);
// 	while (n<=0){
// 		printf("Input number again: ");
// 		scanf("%d",&n);
// 	}
// 	switch(n){
// 		case(1):
// 			printf("One");
// 			break;
// 		case(2):
// 			printf("Two");
// 			break;
// 		case(3):
// 			printf("Three");
// 			break;
// 		case(4):
// 			printf("Four");
// 			break;
// 		case(5):
// 			printf("Five");
// 			break;
// 		case(6):
// 			printf("Six");
// 			break;
// 		case(7):
// 			printf("Seven");
// 			break;
// 		case(8):
// 			printf("Eight");
// 			break;
// 		case(9):
// 			printf("Nine");
// 			break;
// 		default:
// 			printf("Greator than 9");
			
// 	}
// 	return 0;
// }

