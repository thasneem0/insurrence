#include<stdio.h>
void eligible(int age, char condition, int salary) {
    if (age >= 18 && age <= 60 && condition == 'n' && salary >= 25000) {
        printf("You are eligible for medical insurance.\n");
    } else {
        printf("You are NOT eligible for medical insurance.\n");
    }
}
int main()
{
    int age,salary;
    char condition;
    printf("enter the age\n");
    scanf("%d",&age);
    
    printf("Any Pre-existing Condition? (y/n): ");
    scanf(" %c", &condition);
    
    printf("enter the salary");
    scanf("%d",&salary);
    eligible(age,condition,salary);
}
