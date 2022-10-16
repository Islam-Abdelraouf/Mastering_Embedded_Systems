/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 3                                      *
 *   Excercise name: The largest number of three numbers      *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 24/09/2022                                *
 *   Modified date: 24/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    float a , b , c ; //decleration section

    printf("\n############## Console-Output ##############");

    //getting information from the user
    printf("\nplease enter three numbers: ");
    scanf("%f %f %f", &a , &b , &c);
    fflush(stdin); fflush(stdout);

    // logic gate to check the charactar type
    if (a > b)
    {
        if (a > c)
        {
            printf("\nLargest number = %.2f" , a);
        }else
        {
            printf("\nLargest number = %.2f" , c);
        }
    }else
    {
        if (b > c)
        {
            printf("\nLargest number = %.2f" , b);
        }else
        {
            printf("Largest number = %.2f" , c);
        }        
    }
    printf("\n############################################");
    return 0;
}