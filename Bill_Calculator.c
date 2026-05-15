#include <stdio.h>

float calculateTotal(int itemCount)
{
    int quantity;
    float price;
    float total = 0;

    for (int i = 1; i <= itemCount; i++)
    {
        do
        {
            printf("Enter item number %d price: ", i);
            scanf("%f", &price);

            if (price < 0)
            {
                printf("Price cannot be negative. Try again.\n");
            }

        } while (price < 0);

        do
        {
            printf("Enter quantity of item number %d: ", i);
            scanf("%d", &quantity);

            if (quantity < 0)
            {
                printf("Quantity cannot be negative. Try again.\n");
            }

        } while (quantity < 0);

        total += price * quantity;
    }

    return total;
}

float applyDiscount(float total)
{
    if (total > 1000)
    {
        return total * 0.85;
    }
    else
    {
        return total;
    }
}

float applyTax(float total)
{
    float taxRate = 0.10;
    return total + (total * taxRate);
}

void printBillSummary(float total, float discountedTotal, float finalBill)
{
    float discountAmount = total - discountedTotal;
    float taxAmount = finalBill - discountedTotal;

    printf("\n----- Bill Summary -----\n");
    printf("Total before discount: %.2f\n", total);
    printf("Discount amount: %.2f\n", discountAmount);
    printf("Total after discount: %.2f\n", discountedTotal);
    printf("Tax amount: %.2f\n", taxAmount);
    printf("Final bill amount: %.2f\n", finalBill);
}

int main()
{
    int itemCount;

    do
    {
        printf("Enter number of item types: ");
        scanf("%d", &itemCount);

        if (itemCount <= 0)
        {
            printf("Item count must be greater than 0. Try again.\n");
        }

    } while (itemCount <= 0);

    float total = calculateTotal(itemCount);
    float discountedTotal = applyDiscount(total);
    float finalBill = applyTax(discountedTotal);

    printBillSummary(total, discountedTotal, finalBill);

    return 0;
}