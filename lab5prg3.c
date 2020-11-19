/* Modify programming project 9 from chapter 8 so that it includes the following functions :

    void generate_random_walk(char walk[10][10]);
    void print_array(char walk[10][10]);

    main first calls generate_random_walk, which initializes the array to contain '.' characters 
    and then replaces some of these characters by the letters A and Z, as described 
    in the original project. main then calls print_array to display the array on the screen.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{

    srand((unsigned)time(NULL));

    char walk[10][10] = {0};

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[10][10])
{

    char letter = 'A';

         int i = 0,
             j = 0,
             up = 0,
             down = 0,
             left = 0,
             right = 0,
             move = 0;

    srand((unsigned)time(NULL));

    walk[i][j] = letter++;

    while (letter <= 'Z')
    {
        up = down = left = right = move = 0;

        if (j + 1 < 10 && walk[i][j + 1] == 0)
            up = 1;
        if (j - 1 >= 0 && walk[i][j - 1] == 0)
            down = 1;
        if (i + 1 < 10 && walk[i + 1][j] == 0)
            right = 1;
        if (i - 1 >= 0 && walk[i - 1][j] == 0)
            left = 1;

        if (up + down + left + right == 0)
            break;

        move = rand() % 4;

        switch (move)
        {
        case 0:
            if (up)
            {
                walk[i][++j] = letter++;
                break;
            }
        case 1:
            if (down)
            {
                walk[i][--j] = letter++;
                break;
            }
        case 2:
            if (right)
            {
                walk[++i][j] = letter++;
                break;
            }
        case 3:
            if (left)
            {
                walk[--i][j] = letter++;
                break;
            }
        default:
            break;
        }
    }

    return;
}

void print_array(char walk[10][10])
{

    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (walk[i][j] == 0)
                walk[i][j] = '.';
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }

    return;
}