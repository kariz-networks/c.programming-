/*
NAME :joseph kariuki gichuhi
REG :CT100/G/26129/25
DESCRIPTION : calculate fare in distance travelled
*/
#include <stdio.h>

// Function to calculate the fare based on distance
double calculateFare(double distance) {
    const double ratePerKm = 50.0; // KSh. 50 per kilometer
    return distance * ratePerKm;
}

int main() {
    double distance;
    printf("Enter distance traveled (in km): ");
    scanf("%lf", &distance);

    double totalFare = calculateFare(distance);
    printf("Total fare: KSh. %.2f\n", totalFare);

    return 0;
}
