#include <stdio.h>

int main()
{
    int units_used, customer_type;
    double total_amount = 0;

    printf("Enter the total amount of units: ");
    scanf("%d", &units_used);

    printf("Enter your customer type (1 = Home user, 2 = Small business user): ");
    scanf("%d", &customer_type);

    if (units_used <= 0)
    {
        printf("Invalid units\n");
        return 0;
    }

    if (customer_type == 1)
    {
        if (units_used <= 50)
        {
            total_amount = units_used * 8;
        }
        else if (units_used <= 100)
        {
            total_amount = (50 * 8) + ((units_used - 50) * 12);
        }
        else if (units_used <= 200)
        {
            total_amount = (50 * 8) + (50 * 12) + ((units_used - 100) * 18);
        }
        else
        {
            total_amount = (50 * 8) + (50 * 12) + (100 * 18) + ((units_used - 200) * 25);
        }
    }
    else if (customer_type == 2)
    {
        if (units_used <= 100)
        {
            total_amount = units_used * 15;
        }
        else if (units_used <= 300)
        {
            total_amount = (100 * 15) + ((units_used - 100) * 22);
        }
        else
        {
            total_amount = (100 * 15) + (200 * 22) + ((units_used - 300) * 30);
        }
    }
    else
    {
        printf("Invalid customer type\n");
        return 0;
    }

    if (total_amount > 5000)
    {
        total_amount = total_amount + (total_amount * 0.10);
    }

    printf("Total bill = Rs. %.2lf\n", total_amount);

    return 0;
}