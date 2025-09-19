//simple c program(personal detils prompt)simple line comment
/*
Name:JOSEPH KARIUKI GICHUHI
Reg:CT100/G/26129/25
Desciption;personal details prompt
*/
#include<stdio.h>
//main fuction
int main() {
	//variable declaration
	int age;         //%d
	int height;      //%d
	int phone;      //%d
	int weight;     //%d
	
	//prompting the user to enter values of each variables
	printf("Enter  your age:");
	scanf("%d",  &age);
	
	printf("Enter your height:");
	scanf("%d",  &height);
	
	printf("Enter your phone:");
	scanf("%d",  &phone);
	
	printf("Enter your weight:");
	scanf("%d",  &weight);
	
	
	//print the output to the user sreen
	printf("\t your age is %dyrs \n ",  age);
	printf("\tyour height is  %dcm \n",   height);
	printf("\tyour phone is  %d \n",  phone);
	printf("\tyour weight is  %dkg \n",  weight);
	
	return 0;
	
}

