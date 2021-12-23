//Bank Management system
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int language,operation,account_balance,withdrawl,deposit,rep=2;
	printf("Select your language\nPress 1 for English\nPress 2 for Hindi\nPress 3 for Kashmiri\n");
	scanf("%d",&language);
	if(language==1){
		printf("You choose English as your language:\n");
		while(rep==2){
		printf("Press 1 to check your account balance\nPress 2 for withdrawl\nPress 3 for deposition\n");
		scanf("%d",&operation);
		//printf("%d",operation);
		if(operation==1){
			printf("Your Current Account balance is = %d RS\n",account_balance);
		}
		else if(operation==2){
			if(account_balance<=0){
				printf("Your account balance is 0 Please add Some money to Your bank_account first:\n");
			}
			else{
			
			printf("Enter the amount you want to withdraw:\n");
			scanf("%d",&withdrawl);
			if(withdrawl>account_balance){
			    printf("Sorry your account doesnt has that much amount in it:Please check your account balance first:\n");
			}
			else{
			account_balance=account_balance-withdrawl;
			printf("Withdrawl Sucessful\n");
			printf("Remaining account balance is RS:%d\n",account_balance);
			}
		}
		}
		else if(operation==3){
			printf("Enter the amount you want to deposit into your bank account:\n");
			scanf("%d",&deposit);
			if(deposit>9000000){
				printf("The amount you entered is Very Large cant deposit at a time\nDeposition Unsucessful:\n");
			}
			else{
			
			account_balance=account_balance+deposit;
			printf("%d RS deposited into your account\nDeposition Sucessful\n",deposit);
		}
		}
		}
		
		
	}
	else if(language==2){
		printf("You choose Hindi as your language as your language:\n");
	}
	else if(language==3){
		printf("You choose Kashmiri as your language:\n");
	}
}
