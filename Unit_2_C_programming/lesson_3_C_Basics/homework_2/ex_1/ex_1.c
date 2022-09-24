/*************************************************************
*   Mastering Embeded Systems Diploma                        *
*   Unit_2_C_programming                                     *
**************************************************************
*   Homework 2                                               *
*   Excercise number: 1                                      *
*   Excercise name: check if a number is odd or even         *
*   Auther: Islam Abdelraouf                                 * 
*   Creation date: 23/09/2022                                *
*   Modified date: 23/09/2022                                *
*************************************************************/

//Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{

    int a ;
    printf("\n############## Console-Output ##############");
    
    printf("\nplease enter an integer you want to check: ");
    scanf("%d" , &a);
    fflush(stdin) ; fflush(stdout) ;

    //logic gate
    if(a%2 == 0)
    {
        printf("\n%d is even." , a);
    } else
    {
        printf("\n%d is odd." , a);
    }
    printf("\n############################################");

    return 0;
}




