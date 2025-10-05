
/*
Name:joseph kariuki gichuhi
Reg;CT100/G/26129/25
Description:ATM withdrawal loop
*/
#include <stdio.h> 
int main () {
	int amount;
	int balance=10000; // start
	printf("your current balance is %d \n",balance);
	
while(balance>0) // stop
{
	printf("enter amount to withdraw \n");
	scanf("%d",&amount);
	
	balance-=amount ; //step, balance=balance-amount
	printf("new balance:=%d  \n ",balance);
}
	printf("insufficient funds");
   
	return 0;
}