#include <stdio.h>

void inputmarks(int marks[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

void printmarks(int marks[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Marks number %d is: %d\n", i + 1, marks[i]);
    }
}

float calculateTotal(int marks[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total;
}

float calculateAverage(int marks[], int size)
{
    float total = calculateTotal(marks, size);
    return total / size;
}
int findhighest(int marks[],int size)
{
    int highest = marks[0];

    for (int i  = 1 ; i < size ; i++)
    {
        if (marks[i] >= highest )
        {
            highest = marks[i];
        }
    }
    return highest;
}
int findlowest(int marks[],int size)
{
    int lowest = marks[0];

    for (int i = 0 ; i < size ; i++ )
    {
        if (marks[i] < lowest )
        {
            lowest = marks[i];
        }
    }
    return lowest;
}
void countpassfail(int marks[], int size)
{
    int amountpass = 0;
    int amountfail = 0;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] >= 50)
        {
            amountpass++;
        }
        else
        {
            amountfail++;
        }
    }

    printf("Pass students: %d\n", amountpass);
    printf("Fail students: %d\n", amountfail);
}
void searchmark(int marks[], int size, int mark)
{
    for (int i = 0; i < size; i++)
    {
        if (marks[i] == mark)
        {
            printf("Mark %d found at index %d\n", mark, i);
            return;
        }
    }

    printf("Mark %d not found\n", mark);
}
void sortascending(int marks[],int size)
{
    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 1 ; j < size ; j++)
        {
            if (marks[i] > marks[j])
            {
            int temp = marks[i];
            marks[i] = marks[j];
            marks[j] = temp;
            }
        }
    }
}
void sortdescending(int marks[],int size)
{
    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 1 ; j < size ; j++)
        {
            if (marks[i] < marks[j])
            {
            int temp = marks[i];
            marks[i] = marks[j];
            marks[j] = temp;
            }
        }
    }
}
int main()
{
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    int marks[size];

    inputmarks(marks, size);
    printmarks(marks, size);

    float total = calculateTotal(marks, size);
    printf("Total marks: %.2f\n", total);

    float average = calculateAverage(marks, size);
    printf("Average marks: %.2f\n", average);

    int highest = findhighest(marks,size);
    printf("Highest mark: %d\n", highest);

    int lowest = findlowest(marks,size);
    printf("Lowest mark: %d\n", lowest);

    countpassfail(marks, size);

    int markToSearch;
    printf("Enter a mark to search: ");
    scanf("%d", &markToSearch);
    searchmark(marks, size, markToSearch);

    sortascending(marks,size);
    printf("Marks sorted in ascending order:\n");
    printmarks(marks,size);

    sortdescending(marks,size);
    printf("Marks sorted in descending order:\n");
    printmarks(marks,size);

    return 0;
}