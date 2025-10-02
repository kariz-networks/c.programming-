
/*
Name:joseph kariuki gichuhi
Reg:CT100/G/26129/25
Description:water bill calculations
*/
#include <stdio.h>

int main() {
	int units;
	int total_bill;
	
	//get the user input for units consumed
	printf("enter water units consumed:");
	scanf("%d", &units );
	
	//calculate the total bill
	if(units<=30)
	printf("\ntotal bill ksh.20 ");

	else if(units>=31 &&units<=60)
	printf("\ntotal bill ksh.25 ");

	else if (units>=60) 
	printf("\ntotal bill ksh.30 ");
	
	return 0;
}
