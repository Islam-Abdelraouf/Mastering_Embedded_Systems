/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 7                                      *
 *   Excercise name: Factorial of a positive number 'n'       *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 25/09/2022                                *
 *   Modified date: 25/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    int x, counter;
    unsigned int factorial;

    printf("\n############# Console-Output #############");
begin:
    counter=1; factorial = 1;

    printf("\nplease enter an integer, or 0 to exit: ");
    scanf("%d" , &x);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    //Logic gate
    if (x < 0)    
    {   //error if the number < zero
        printf("Error!!! Factorial of negative number doesn't exist.");
        goto begin; //re-enter a new number
    } else if (x == 0)
    {   //exit the sub if the user enters 0
        printf("\nYOU INITIATED THE EXIT COMMAND\n");
        goto finish;
    }else if (x > 0) 
    {   //calculate the factorial if the user enters a number > 0
        while(counter <= x )
        {
            factorial *= counter ;
            //printf("\nfactorial = %d", factorial);
            counter++ ;
        }
        printf("factorial = %d", factorial);        
    }
    goto begin; //play again :)
finish:    
    printf("\n########################################");
    return 0;
}