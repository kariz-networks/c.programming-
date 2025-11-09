/*
Name :joseph kariuki gichuhi
Reg : CT100/G/26129/25
Description :libray c files
*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file in read mode
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1; // exit if file not found
    }

    // Read each transaction amount and sum them
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // Close the file after reading
    fclose(file);

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}

