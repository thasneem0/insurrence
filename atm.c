#include<stdio.h>
void trasnaction(int choice,int *balance)
{
    int amount,i,n;
    for(i=0;i<n;i++)
    {
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:{printf("Enter Amount to Withdraw: ");
            scanf("%d", &amount);
            if (amount > 0 && amount <= *balance) {
                *balance -= amount;
                printf("Withdrawn: ₹%d\nRemaining Balance: ₹%d\n", amount, *balance);
            } else {
                printf("Insufficient Balance!\n");
            }
            break;
           } 
           case 2: 
            printf("Enter Amount to Deposit: ");
            scanf("%d", &amount);
            if (amount > 0) {
                *balance += amount;
                printf("Deposited: ₹%d\nNew Balance: ₹%d\n", amount, *balance);
            } else {
                printf("Invalid Amount!\n");
            }
            break;

            case 3:{ 
                printf("Current Balance: ₹%d\n", *balance);
                break;
            }
            default:{
            printf("Invalid Choice! Try again.\n");
            }
        }
    }
}
          
int main()
{
    int i,n,choice,balance=10000;
    printf("enter the coice\n");
    printf("1. deposit money\n");
    printf("2. widraw a money");
    printf("3.cheak balance\n");
    trasnaction(choice,&balance);
    
}
