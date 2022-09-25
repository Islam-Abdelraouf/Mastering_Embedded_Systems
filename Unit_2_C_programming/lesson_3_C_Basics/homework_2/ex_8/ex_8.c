/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 8                                      *
 *   Excercise name:        calculator usin switch...case     *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 25/09/2022                                *
 *   Modified date: 25/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    float x, y;
    char operation;
    printf("\n############# Console-Output #############");
//begin:

    //getting the operation type from the user
    printf("\nEnter operator either + or - or * or /: ");
    scanf("%c" , &operation);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    //getting two float numbers from the user
    printf("\nEnter two numbers: ");
    scanf("%f %f" , &x , &y);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    //Logic gate
    switch (operation)
    {
    case '+':
        /* code */
        printf("\n%.2f + %.2f = %.2f" , x , y , x+y);
        break;
    case '-':
        /* code */
        printf("\n%.2f - %.2f = %.2f" , x , y , x-y);
        break;  
    case '*':
        /* code */
        printf("\n%.2f * %.2f = %.2f" , x , y , x*y);
        break;
    case '/':
        /* code */
        printf("\n%.2f / %.2f = %.2f" , x , y , x/y);
        break;           
    default:
        break;
    }

    //goto begin; //play again :)
//finish:    
    printf("\n########################################");
    return 0;
}