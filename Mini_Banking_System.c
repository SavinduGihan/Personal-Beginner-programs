#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    do {
        printf("\n--- Banking Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Current Balance: %.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Deposit successful.\n");
            } else {
                printf("Invalid amount.\n");
            }
        } else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful.\n");
            } else {
                printf("Invalid amount or insufficient balance.\n");
            }
        } else if (choice == 4) {
            printf("Thank you.\n");
        } else {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
