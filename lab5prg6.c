/* Write a program that computes the value of the following polynomial:
    3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

    Write a program that asks the user to enter a value for x,calls the functions
    to compute the value of the polynomial,and then displays the value returned by the function.
*/

#include <stdio.h>

int main(void){

    int x,y;

    printf("Enter a value of x : ");
    scanf("%d", &x);

    poly(x);

    printf("The value of given polynomial :%d\n", poly(x));

    return 0;

    
}

int poly(int x){

    int y;

    y = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    return y;


}