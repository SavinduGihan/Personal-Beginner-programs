#include <stdio.h>

int main() {
    int marks[5];
    int i, sum = 0;
    float average;
    char grade;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5.0;

    if (average >= 75)
        grade = 'A';
    else if (average >= 65)
        grade = 'B';
    else if (average >= 55)
        grade = 'C';
    else if (average >= 35)
        grade = 'S';
    else
        grade = 'F';

    printf("\nTotal = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}
