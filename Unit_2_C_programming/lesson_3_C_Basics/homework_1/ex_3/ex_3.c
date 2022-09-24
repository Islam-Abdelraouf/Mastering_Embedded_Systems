/******************************************
*   Mastering Embeded Systems Diploma     *
*   Unit_2_C_programming                  *
*******************************************
*   Homework 1                            *
*   Excercise number: 3                   *
*   Excercise name: two numbers summation *
*   Auther: Islam Abdelraouf              * 
*   Creation date: 23/09/2022             *
*   Modified date: 23/09/2022             *
******************************************/

//linked c/c++ languages libraries  
#include <stdio.h>  

//main entry point
int main()

{

    int x , y ;

    printf("\n##### Colnsole-Output #####");
    printf("\nplease enter two integers:    ");
    
    printf("\n1: ");
    scanf("%d" , &x);
    fflush(stdin) ; fflush(stdout) ;
    
    printf("\n2: ");
    scanf("%d" , &y);
    fflush(stdin) ; fflush(stdout) ;

    printf("\nSum = %d" , x+y);
    printf("\n###########################");

    return 0;
}

