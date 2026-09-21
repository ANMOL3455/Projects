#include <stdio.h>
struct customer_details
{
    char name[20];
    int balance;
};
void withdraw(struct customer_details *cd)
{
    int withdraw_amount;
    printf("\nPlease Enter the amount you want to withdraw: ");
    if (scanf("%d", &withdraw_amount) != 1)
    {
        printf("Invalid input. Please enter digits only.\n");
        while (getchar() != '\n')
            ;
        return;
    }
    if (withdraw_amount <= 0)
    {
        printf("Amount must be greater than zero.\n");
    }
    else if (withdraw_amount % 500 != 0)
    {
        printf("Please enter the withdrawal amount as a multiple of 500.\n");
    }
    else if (withdraw_amount > cd->balance)
    {
        printf("Insufficient balance. You have Rs. %d.\n", cd->balance);
    }
    else
    {
        cd->balance -= withdraw_amount;
        printf("Withdrawal successful. Please collect your money.\n");
        printf("Remaining balance: Rs. %d\n", cd->balance);
    }
}
void deposit(struct customer_details *cd)
{
    int amount;
    printf("\nEnter the amount you want to deposit: ");
    if (scanf("%d", &amount) != 1 || amount <= 0)
    {
        printf("Invalid amount.\n");
        while (getchar() != '\n')
            ;
        return;
    }
    cd->balance += amount;
    printf("Deposit successful. New balance: Rs. %d\n", cd->balance);
}
void check_balance(struct customer_details cd)
{
    printf("\nAccount holder: %s\n", cd.name);
    printf("Balance: Rs. %d\n", cd.balance);
}
void out(struct customer_details cd)
{
    printf("\nThanks for using the ATM, %s!\n", cd.name);
}
int main(void)
{
    struct customer_details cd = {"Anmol Sapkota", 4000};
    int choice;
    printf("ATM ma hajur lai swagat cha\n");
    printf("Aja Tapai k garne chanu hunxa\n");
    while (1)
    {
        printf("\n[1] Withdraw\n");
        printf("[2] Deposit\n");
        printf("[3] Check Balance\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice. Enter 1-4.\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        switch (choice)
        {
        case 1:
            withdraw(&cd);
            break;
        case 2:
            deposit(&cd);
            break;
        case 3:
            check_balance(cd);
            break;
        case 4:
            out(cd);
            return 0;
        default:
            printf("Invalid choice. Enter 1-4.\n");
        }
    }
    return 0;
}
