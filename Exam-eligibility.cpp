// simple c program (eligibility for final exam) line comment
/*
Name:joseph kariuki gichuhi
Reg:CT100/G/26129/25
Description:eligibility for the final exam
*/
#include<stdio.h>
int main() {
	int attedance;
	int marks;
	
	//get the student input for attendance
	printf("enter attedance:");
	scanf("%d" ,&attedance);
	
	//get the student input for marks
	printf("enter marks:");
	scanf("%d",&marks);


	//check eligibility
	if(attedance>=75 & marks>=40)
	printf("\nyou are eligible.\n");
	else
	printf("\nyou are not eligible.\n"); 
	
	
	return 0;
	
	
	
	
	
}
