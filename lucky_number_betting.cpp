/*
Name:joseph kariuk gichuhi
Reg:CT100/G/26129/25
Descripion:lucky number betting
Date:7th oct 2025
*/
#include <stdio.h>
int main () {
	int number=11;
	
	//prompt the user to input guess number
	printf("enter a guess number from (1-20): \n");
	scanf("%d", &number);
	
	if(number>1 &&number<=10 ) 
		printf("Too low from the lucky number.\n",number);
		
	else  if (number>=12 &&number<=20) 
	
	printf("Too high from the lucky number. \n");


    else
	printf("congratulations you are our winner today.\n");
    scanf("%d", &number);

	
	
	return 0;
}
