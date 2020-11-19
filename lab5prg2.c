/* Modify programming project 5 from chapter 5 so that it uses a function to compute the amount of income tax.
    When passes an amount of taxable income, the function will return the tax due.
*/


#include <stdio.h>

double income_tax(float income);

int main(void)
{
    float income, tax;

    printf("Enter the amount of income : $ ");
    scanf("%f", &income);


    income_tax(income);

    printf("The tax due : %.2f\n", income_tax(income));

    return 0;

}

double income_tax(float income){

    float tax;

    if (income < 750.00f){
        tax = 0.01f * income;
    }
    else if (income >= 750.00f && income < 2250.00f){
        tax = 7.50f + 0.02f * 750.00f;
    }
    else if (income >= 2250.00f && income < 3750.00f){
        tax = 37.50f + 0.03f * 2250.00f;
    }
    else if (income >= 3750.00f && income < 5250.00f){
        tax = 82.50f + 0.04f * 3750.00f;
    }
    else if (income >= 5250.00f && income < 7000.00f){
        tax = 142.50f + 0.05 * 5250.00f;
    }
    else{ 
        tax = 230.00f + 0.06 * 7000.00f;
    }


    return tax;
}