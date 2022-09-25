/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Homework 1                                   *
*   Excercise number: 4                          *
*   Excercise name: float numbers multiplication *
*   Auther: Islam Abdelraouf                     * 
*   Creation date: 23/09/2022                    *
*   Modified date: 23/09/2022                    *
*************************************************/

//Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{

    float x , y ;
    printf("\n######## Console-Output ########");
    printf("\nPlease enter two real numbers...");

    printf("\n1. ");
    scanf("%f" , &x);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    printf("\n2. ");
    scanf("%f" , &y);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    printf("\nProduct = %.3f" , x*y);

    printf("\n################################");

    return 0;
}




