/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 4                                      *
 *   Excercise name: Check the number positive or negative    *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 24/09/2022                                *
 *   Modified date: 24/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{

    float x ;
    printf("\n########### Console-Output ###########");
begin:
    printf("\nplease enter a number: ");
    scanf("%f" , &x);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    if(x == 0) 
    {
        printf("\nYou entered zero."); goto begin;
    }else if(x < 0)
    {
        printf("\n%.2f is negative." , x);
    }else if(x > 0)
    {
        printf("\n%.2f is positive." , x);
    }
    printf("\n######################################");
finish:
    return 0;
}