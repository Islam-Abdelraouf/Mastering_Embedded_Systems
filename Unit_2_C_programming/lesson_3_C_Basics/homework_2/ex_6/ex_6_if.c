/****************************************************************
 *   Mastering Embeded Systems Diploma                          *
 *   Unit_2_C_programming                                       *
 ****************************************************************
 *   Homework 2                                                 *
 *   Excercise number: 6                                        *
 *   Excercise name: Summation of natural numbers {if condition}*
 *   Auther: Islam Abdelraouf                                   *
 *   Creation date: 25/09/2022                                  *
 *   Modified date: 25/09/2022                                  *
 ***************************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    int x;
    unsigned int counter, total=0;

    printf("\n############# Console-Output #############");
begin:
    printf("\nplease enter an integer: ");
    scanf("%d" , &x);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    if(x<=0)    
    {
        printf("no negative numbers are allowed!!!");
        goto begin;
    }
    for(counter = 1 ; counter <= x ; counter++)
    {
        total += counter ;
    }
    printf("Sum = %d", total);
finish:
    printf("\n########################################");
    return 0;
}