/* Write a program that asks the user to enter a series of integers(whichstores in an array),
    then sorts the integers by calling the function selection_sort. When given a array with n elements. selection_sort must do the following:

    1. Search the array to find the largest element, then move it to the last position in the array.
    2. Call itself recursively to sort the first n-1 elements in the array.
*/

#include <stdio.h>

#define LEN 100

void selection_sort(int a[], int n);

int main(void)
{

    int i, n, a[LEN], c;

    printf("Enter a series of integers : ");

    for(i = 0, n = 0; i < LEN; i++)
    {
        scanf(" %d", &a[i]);
        n++;
        if ((c = getchar()) == '\n') /* ungetc() not yet covered,    */
            break;                   /* but used to put the non-'\n' */
        ungetc(c, stdin);            /* char back to be re-read.  */
    }

    selection_sort(a, n);

    printf("Sorted order :");

    for (i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
        
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n)
{

    if (n == 0){
        return;
    }

    int i, temp, max = 0;

    for(i = 0; i < n; i++){

        if (a[i] > a[max]){

            max = i;
        }
    }

    temp = a[max];
    a[max] = a[n-1];
    a[n-1]= temp;

    selection_sort(a, n-1);
}
