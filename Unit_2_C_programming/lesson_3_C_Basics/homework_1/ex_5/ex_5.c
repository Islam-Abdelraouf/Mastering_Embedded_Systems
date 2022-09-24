/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Homework 1                                   *
*   Excercise number: 5                          *
*   Excercise name: swapping 2 numbers           *
*   Auther: Islam Abdelraouf                     * 
*   Creation date: 23/09/2022                    *
*   Modified date: 23/09/2022                    *
*************************************************/

//Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{

    float a , b , temp ;
    printf("\n######## Console-Output ########");
    
    printf("\nplease enter value of a: ");
    scanf("%f" , &a);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    printf("\nplease enter value of b: ");
    scanf("%f" , &b);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    temp = a; a = b; b = temp;

    printf("\nafter swapping, value of a = %f" , a);
    printf("\nafter swapping, value of b = %f" , b);
    printf("\n################################");

    return 0;
}




