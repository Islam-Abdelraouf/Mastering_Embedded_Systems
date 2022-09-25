/*************************************************************
*   Mastering Embeded Systems Diploma                        *
*   Unit_2_C_programming                                     *
**************************************************************
*   Homework 1                                               *
*   Excercise number: 6                                      *
*   Excercise name: swapping 2 numbers without temp variable *
*   Auther: Islam Abdelraouf                                 * 
*   Creation date: 23/09/2022                                *
*   Modified date: 23/09/2022                                *
*************************************************************/

//Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{

    float a , b ;
    printf("\n######## Console-Output ########");
    
    printf("\nplease enter value of a: ");
    scanf("%f" , &a);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    printf("\nplease enter value of b: ");
    scanf("%f" , &b);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

//  Assuming a=10 & b=100
//  a=a+b  --> 10+100=110
//  b=a-b  --> 110-100=10
//  a=a-b  --> 110-10=100
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nafter swapping, value of a = %.2f" , a);
    printf("\nafter swapping, value of b = %.2f" , b);
    printf("\n################################");

    return 0;
}




