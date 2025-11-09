/*
Name :joseph kariuki gichuhi
Reg : CT100/G/26129/25
Description :libray c files
*/
#include <stdio.h>
#include <string.h>

int main() {
    char title[256];  // Buffer to hold the book title (max 255 chars + null terminator)
    FILE *file;

    printf("Enter the book title to record: ");
    fgets(title, sizeof(title), stdin);

    // Remove the trailing newline character added by fgets
    title[strcspn(title, "\n")] = '\0';

    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open the file borrowed_books.txt for writing.\n");
        return 1;
    }

    // Write the title followed by a newline
    fprintf(file, "%s\n", title);

    // Close the file
    fclose(file);

    // Display confirmation message
    printf("Book title \"%s\" has been successfully stored in borrowed_books.txt.\n", title);

    return 0;
}
