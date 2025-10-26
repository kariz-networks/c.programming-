/*
Name: joseph kariuki gichuhi
Reg: CT100/G/26129/25
Description:  electric bill calculations
*/

#include <stdio.h>

double calculateElectricBill(int units) {
    double bill = 0;

    if (units <= 100) {
        bill = units * 10;
        
    } else if (units <= 200) {
        bill = 100 * 10;
    
        bill += (units - 100) * 15;
        
    } else {
        // First 100 units at KSh. 10 per 
        bill = 100 * 10;
        // Next 100 units at KSh. 15 per unit
        bill += 100 * 15;
        // Remaining units (units - 200) at KSh. 20 per unit
        bill += (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    double totalBill = calculateElectricBill(units);
    printf("Total bill: KSh. %.2f\n", totalBill);

    return 0;
}