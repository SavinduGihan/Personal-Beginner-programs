#include <stdio.h>

int main() {
    int students, i;
    int present = 0, absent = 0;
    int status[100];

    printf("Enter number of students: ");
    scanf("%d", &students);

    if (students > 100 || students <= 0) {
        printf("Invalid number of students.\n");
        return 0;
    }

    for (i = 0; i < students; i++) {
        printf("Student %d attendance (1 = Present, 0 = Absent): ", i + 1);
        scanf("%d", &status[i]);

        if (status[i] == 1)
            present++;
        else if (status[i] == 0)
            absent++;
        else
            printf("Invalid input for student %d\n", i + 1);
    }

    printf("\nTotal Present = %d\n", present);
    printf("Total Absent = %d\n", absent);

    return 0;
}
