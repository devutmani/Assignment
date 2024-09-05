#include<stdio.h>

int main() 
{
    // Declaring variable for salary, tax, tax amount and net salary
    float salary, tax_rate, tax_amount, net_salary;

    // Asking the user for their salary
    printf("Enter your salary: ");
    scanf("%f",&salary);

    // Asking the user for the tax rate
    printf("Enter the tax rate: ");
    scanf("%f",&tax_rate);

    // Calculating the tax amount 
    tax_amount = (tax_rate/100)*salary;

    // Calculate the net salary after tax
    net_salary = salary - tax_amount;

    // Showing the results

    printf("You need to pay: %.2f in taxes.\n", tax_amount);
    printf("Your salary after tax is: %.2f", net_salary);
    return 0;

}