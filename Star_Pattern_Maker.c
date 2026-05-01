#include <stdio.h>

int main()
{
    int row, space, star, extraStar, size;
    int choice;

    printf("\n");
    printf("*************************************\n");
    printf("*                                   *\n");
    printf("*        SIMPLE PATTERN MAKER       *\n");
    printf("*                                   *\n");
    printf("*************************************\n");

    printf("\nChoose a pattern\n");
    printf("----------------\n");
    printf("1 - Diamond\n");
    printf("2 - Pyramid\n");
    printf("3 - Reverse Pyramid\n");
    printf("4 - Right Triangle\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter number: ");
    scanf("%d", &size);

    printf("\n");

    switch(choice)
    {
        case 1:
            printf("Diamond Pattern\n");
            printf("---------------\n\n");

            for(row = 1; row <= size; row++)
            {
                for(space = row; space < size; space++)
                {
                    printf(" ");
                }

                for(star = 1; star <= row; star++)
                {
                    printf("*");
                }

                for(extraStar = 1; extraStar < row; extraStar++)
                {
                    printf("*");
                }

                printf("\n");
            }

            for(row = size - 1; row >= 1; row--)
            {
                for(space = size; space > row; space--)
                {
                    printf(" ");
                }

                for(star = 1; star <= row; star++)
                {
                    printf("*");
                }

                for(extraStar = 1; extraStar < row; extraStar++)
                {
                    printf("*");
                }

                printf("\n");
            }
            break;

        case 2:
            printf("Pyramid Pattern\n");
            printf("---------------\n\n");

            for(row = 1; row <= size; row++)
            {
                for(space = row; space < size; space++)
                {
                    printf(" ");
                }

                for(star = 1; star <= row; star++)
                {
                    printf("*");
                }

                for(extraStar = 1; extraStar < row; extraStar++)
                {
                    printf("*");
                }

                printf("\n");
            }
            break;

        case 3:
            printf("Reverse Pyramid Pattern\n");
            printf("-----------------------\n\n");

            for(row = size; row >= 1; row--)
            {
                for(space = size; space > row; space--)
                {
                    printf(" ");
                }

                for(star = 1; star <= row; star++)
                {
                    printf("*");
                }

                for(extraStar = 1; extraStar < row; extraStar++)
                {
                    printf("*");
                }

                printf("\n");
            }
            break;

        case 4:
            printf("Right Triangle Pattern\n");
            printf("----------------------\n\n");

            for(row = 1; row <= size; row++)
            {
                for(star = 1; star <= row; star++)
                {
                    printf("*");
                }

                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    printf("\n");
    printf("*************************************\n");
    printf("*          THANK YOU                *\n");
    printf("*************************************\n");

    return 0;
}