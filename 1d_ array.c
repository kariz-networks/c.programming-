/*
NAME :joseph kariuki gichuhi
REG :CT100/G/26129/25
DESCRIPTION : revenue 1d array
*/
#include <stdio.h>

int main() {
    double revenue[7];
    double totalRevenue = 0.0;
    double averageRevenue;

    // Input revenue for each day
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        totalRevenue += revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7;

    // Display total and average revenue
    printf("Total weekly revenue: %.2f\n", totalRevenue);
    printf("Average daily revenue: %.2f\n", averageRevenue);

    return 0;
}