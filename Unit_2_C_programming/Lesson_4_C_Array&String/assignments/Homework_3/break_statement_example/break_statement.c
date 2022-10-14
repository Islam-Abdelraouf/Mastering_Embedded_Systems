/***************************************
 *   Mastering Embeded Systems Diploma  *
 *   Unit_2_C_programming               *
 *   Lesson_4_array&string              *
 ****************************************
 *             Homework_3               *
 *   example of continue statement      *
 *   Auther: Islam Abdelraouf           *
 *   Creation date: 13/10/2022          *
 *   Modified date: 13/10/2022          *
 ***************************************/

// Linked c/c++ libraries

#include <stdio.h>
int main()
{
    int x;
    float num, product = 1.0;

    printf("enter 4 numbers for multiplication: ");
    for (x = 0; x < 4; x++)
    {
        printf("\nenter number %d: ", x + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%f", &num);

        if (num == 0)
            continue;
        product *= num;
        // printf("prod. = %.2f" , product);
    }

    printf("product= %.2f", product);

    printf("\n######################################\n");

    return 0;
}