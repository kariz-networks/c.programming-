/*
NAME :joseph kariuki gichuhi
REG :CT100/G/26129/25
DESCRIPTION : calculate fare in distance travelled
*/
#include <stdio.h>

void convertToCelsius() {
    double Fahrenheit, Celsius;
    
    // Prompt the user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &Fahrenheit);
    
    // Convert to Celsius
    Celsius = (Fahrenheit - 32) * 5.0 / 9.0;
    
    // Display the result
    printf("Temperature in Celsius: %.2f°C\n", Celsius);
}

int main() {
    // Call the function
    convertToCelsius();
    return 0;
}
