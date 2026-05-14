#include <stdio.h>

int main()
{
    int count;
    int num[100];
    int i;
    int sumeven = 0, sumodd = 0, total = 0;
    int evencount = 0, oddcount = 0;
    float average = 0.0;

    printf("Enter the amount of numbers: ");
    scanf("%d", &count);

    if (count <= 0 || count > 100)
    {
        printf("Invalid amount. Please enter a number between 1 and 100.\n");
        return 1;
    }

    for (i = 0; i < count; i++)
    {
        printf("Enter mark number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < count; i++)
    {
        if (num[i] % 2 == 0)
        {
            sumeven += num[i];
            evencount++;
        }
        else
        {
            sumodd += num[i];
            oddcount++;
        }
    }

    total = sumeven + sumodd;
    average = (float) total / count;

    printf("The sum of even numbers is: %d\n", sumeven);
    printf("The sum of odd numbers is: %d\n", sumodd);
    printf("The total sum is: %d\n", total);
    printf("The average is: %.2f\n", average);
    printf("Even count: %d\n", evencount);
    printf("Odd count: %d\n", oddcount);

    return 0;
}