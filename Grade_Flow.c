#include <stdio.h>

int main()
{
    int i, j, num_of_subjects, student_num;
    float mark, total, average;

    printf("Enter number of subjects: ");
    scanf("%d", &num_of_subjects);

    printf("Enter number of students: ");
    scanf("%d", &student_num);

    if (num_of_subjects <= 0 || student_num <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (j = 1; j <= student_num; j++)
    {
        total = 0;

        printf("\nStudent %d\n", j);

        for (i = 1; i <= num_of_subjects; i++)
        {
            printf("Enter subject %d marks: ", i);
            scanf("%f", &mark);

            if (mark < 0 || mark > 100)
            {
                printf("Invalid marks\n");
                return 0;
            }

            total += mark;
        }

        average = total / num_of_subjects;

        printf("Average: %.2f | Grade: ", average);

        if (average >= 75)
            printf("A\n");
        else if (average >= 65)
            printf("B\n");
        else if (average >= 50)
            printf("C\n");
        else if (average >= 35)
            printf("S\n");
        else
            printf("F\n");
    }

    return 0;
}