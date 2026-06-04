#include <stdio.h>

int balance = 5000;

void deposit()
{
    int amt;
    printf("Enter Amount to Deposit: ");
    scanf("%d", &amt);

    balance += amt;

    printf("Amount Deposited Successfully!\n");
    printf("Current Balance = %d\n", balance);
}

void withdraw()
{
    int amt;

    printf("Enter Amount to Withdraw: ");
    scanf("%d", &amt);

    if (amt <= balance)
    {
        balance -= amt;
        printf("Amount Withdrawn Successfully!\n");
        printf("Current Balance = %d\n", balance);
    }
    else
    {
        printf("Insufficient Balance!\n");
    }
}

void showBalance()
{
    printf("Current Balance = %d\n", balance);
}

int main()
{
    int choice;

    do
    {
        printf("\nBANK MENU\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Show Balance\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                showBalance();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
