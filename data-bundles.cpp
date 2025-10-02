/*
Name:joseph kariuki gichuhi
Reg:CT100/G/26129/25
Description: buy data bundles
*/
#include<stdio.h>
// Function to print the menu table
void display_menu() {
    printf("======================================\n");
    printf("   Mobile Data Bundle Purchase Menu\n");
    printf("======================================\n");
    printf("Option | Bundle (MB/GB) | Cost (KES)\n");
    printf("--------------------------------------\n");
    printf("   1   |    100 MB      |    50\n");
    printf("   2   |    500 MB      |    200\n");
    printf("   3   |    1 GB        |    350\n");
    printf("   4   |    2 GB        |    600\n");
    printf("--------------------------------------\n");
}

int main() {
    int choice;

    // 1. Display the menu
    display_menu();

    // 2. Ask the user to enter their choice (1-4)
    printf("Enter your choice (1-4): ");
    
    // Check if the input is a valid integer
    if (scanf("%d", &choice) != 1) {
        printf("\nError: Invalid input. Please enter a number.\n");
        return 1; // Exit with an error code
    }

    printf("\n"); // Add a newline for cleaner output

    // 3. Use a switch statement to display the bundle selected and its cost
    switch (choice) {
        case 1:
            printf("You selected Option 1:\n");
            printf("Bundle: 100 MB\n");
            printf("Cost: 50 KES\n");
            break; // Exit the switch block
            
        case 2:
            printf("You selected Option 2:\n");
            printf("Bundle: 500 MB\n");
            printf("Cost: 200 KES\n");
            break;
            
        case 3:
            printf("You selected Option 3:\n");
            printf("Bundle: 1 GB\n");
            printf("Cost: 350 KES\n");
            break;
            
        case 4:
            printf("You selected Option 4:\n");
            printf("Bundle: 2 GB\n");
            printf("Cost: 600 KES\n");
            break;
            
        default:
            // Handle cases where the user enters a number outside of 1-4
            printf("Invalid choice. Please run the program again and select an option between 1 and 4.\n");
            break;
    }

    printf("Thank you for your purchase!\n");

    return 0; // successful execution
}

