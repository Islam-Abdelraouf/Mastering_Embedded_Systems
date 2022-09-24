/******************************************
*   Mastering Embeded Systems Diploma     *
*   Unit_2_C_programming                  *
*******************************************
*   Homework 1                            *
*   Excercise number: 2                   *
*   Excercise name: printing user integer *
*   Auther: Islam Abdelraouf              * 
*   Creation date: 23/09/2022             *
*   Modified date: 23/09/2022             *
******************************************/

//linked c/c++ languages libraries  
#include <stdio.h>                       

//main entry function
int main()
{
    //local declerations section
    int x;

    printf("\n########## console output ##########");
    printf("\nPlease enter an integer number: ");
    scanf("%d" , &x);
    fflush(stdin); fflush(stdout);  //Flushing the input/output buffer, to avoid the VS code bug
    
    
    printf("\nYou entered: %d" , x);
    printf("\n####################################");
    fflush(stdin); fflush(stdout);  //Flushing the input/output buffer, to avoid the VS code bug
    
    return 0;
}