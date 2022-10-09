/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 5                                      *
 *   Excercise name: Check if a character is an alphabet      *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 24/09/2022                                *
 *   Modified date: 24/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries

#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,r;
start:
    printf("enter first number: \n");
    scanf("%d",&x);

    fflush(stdin); fflush(stdout);

    printf("enter second number: \n");
    scanf("%d",&y);

    r = x%y;
    printf("reminder = %d", r);
    printf("\n######################################\n");
    goto start;
return 0;
}

