//simple c program(eligibility of a loan)simple line comment
/*
Name:JOSEPH KARIUKI GICHUHI
Reg:CT100/G/26129/25
Desciption;eligibilty of a loan
*/
#include <stdio.h>

int main() {
    int age;    
    double income;    

    // Get user input for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Get user input for income
    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // Check eligibility
    if (age >= 21 & income >= 21000) 
        printf("\nCongratulations, you qualify for a loan.\n");
     else 
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    

    return 0;
}
	



