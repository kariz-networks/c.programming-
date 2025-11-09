#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char reg[20];
    int marks;
} Student;

int main() {
    FILE *file = fopen("results.dat", "rb");
    
    // If file doesn't exist, create one with sample data – super friendly! ??
    if (!file) {
        printf("?? Hi. students results ?\n\n");
        
        file = fopen("results.dat", "wb");
        if (!file) {
            printf("? Can't create file – check permissions! ??\n");
            return 1;
        }

        Student students[] = {
            {"Alice Johnson        ", "CS2023001", 92},
            {"Bob William           ", "EE2023002", 85},
            {"Clara Smith           ", "ME2023003", 98},
            {"David Brown           ", "IT2023004", 79},
            {"Emma Davis            ", "CS2023005", 95}
        };

        fwrite(students, sizeof(Student), 5, file);
        fclose(file);
        printf("? Done! Created results.dat with 5 students. Let's view them! ??\n\n");
        
        file = fopen("results.dat", "rb");
        if (!file) return 1;
    }

    Student s;
    printf("?? Student Exam Results ??\n");
    printf("-------------------------------------\n");
    printf("%-25s %s\n", "Name", "Marks");
    printf("-------------------------------------\n");

    while (fread(&s, sizeof(Student), 1, file) == 1) {
        s.name[49] = '\0';  // Safe null termination
        printf("%-25s %d\n", s.name, s.marks);
    }

    fclose(file);
    printf("-------------------------------------\n");
    printf("All done! Thanks for checking the results ??\n");
    printf("Run again anytime – works every time! ??\n");

    return 0;
}
