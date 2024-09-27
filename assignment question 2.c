#include"stdio.h"
int main(){
	int a,b,c,d;
	printf("type 1 for accountA\n");
	printf("type 2 for accountB\n");
	printf("type 3 for accountC\n");
	printf("Account:");
	scanf("%d",&a);
	if(a==1){
		printf("To check balance type 1\n");
		printf("For withdrawl type 2\n");
		printf("To deposit type 3\n");
		printf("You want to:");
		scanf("%d",&b);
		if(b==1){
			printf("Balance = 25,00,000");
		}
		else if(b==2){
			printf("Amount you want to withdrawl = ");
			scanf("%d",&c);
			printf("Balance = %d",2500000-c);
		}
		else if(b==3){
			printf("Amount you want to deposit = ");
			scanf("%d",&d);
			printf("Balance = %d",2500000+d);
		}else{
			printf("wrong Entry");
		}
	}
	else if(a==2){
		printf("To check balance type 1\n");
		printf("For withdrawl type 2\n");
		printf("To deposit type 3\n");
		printf("You want to:");
		scanf("%d",&b);
		if(b==1){
			printf("Balance = 35,00,000");
		}
		else if(b==2){
			printf("Amount you want to withdrawl = ");
			scanf("%d",&c);
			printf("Balance = %d",3500000-c);
		}
		else if(b==3){
			printf("Amount you want to deposit = ");
			scanf("%d",&d);
			printf("Balance = %d",3500000+d);
		}else{
			printf("Wrong entry");
		}
	}
	else if(a==3){
		printf("To check balance type 1\n");
		printf("For withdrawl type 2\n");
		printf("To deposit type 3\n");
		printf("You want to:");
		scanf("%d",&b);
	    if(b==1){
			printf("Balance = 45,00,000");
		}
		else if(b==2){
			printf("Amount you want to withdrawl = ");
			scanf("%d",&c);
			printf("Balance = %d",4500000-c);
		}
		else if(b==3){
			printf("Amount you want to deposit = ");
			scanf("%d",&d);
			printf("Balance = %d",4500000+d);
		}else{
			printf("wrong entry");
		}
	}else{
		printf("Wrong");
	}
	return 0;
}