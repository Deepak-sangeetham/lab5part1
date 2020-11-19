/* Write a program that asks the user to enter values of x and n, calls power to compute x^n, and then displays the value returned by the function */

#include <stdio.h>

int power(int x, int n);

int main(void){

    int x, n;

    printf("Enter x : ");
    scanf("%d", &x);

    printf("Enter n : ");
    scanf("%d", &n);

    power(x,n);

    printf("The value of %d^%d : %d\n", x, n, power(x,n));

    return 0;

}

int power(int x, int n){

    if (n == 0){
        return 1;
    }
    else{

        if(n % 2 == 0)
            return (power(x, n / 2) * power(x, n / 2));

        else
            return x * power(x, n - 1);
    }
        
}