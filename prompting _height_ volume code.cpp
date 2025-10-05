//simple c program  
/*
Name:joseph kariuki 
Geg:CT100/G/26129/25
Description:prompt the user to enter radius and height 
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141
int main() {
    float radius, height, volume, surfaceArea;

    // Prompt the user for radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * pow(radius, 2) * height;
    surfaceArea = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;

    // Display the results
    printf("\nVolume of the cylinder: %.2fcm^3\n", volume);
    printf("\nSurface Area of the cylinder: %.2fcm^2\n", surfaceArea);

    return 0;
}
 
