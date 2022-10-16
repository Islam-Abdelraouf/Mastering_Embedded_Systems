/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 5                                      *
 *   Excercise name: Check if a character is an alphabet      *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 24/09/2022                                *
 *   Modified date: 24/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    char x;

    printf("\n############# Console-Output #############");
begin:
    printf("\nplease enter a character, or # to exit: ");
    scanf("%c" , &x);
    fflush(stdin) ; fflush(stdout) ;  //Flushing the input/output buffer, to avoid the VS code bug

    if((x > 65 && x < 90) || (x > 97 && x < 122))
    {
        printf("%c is an alphabet.", x);
    }else if(x == 35)
    {
        goto finish ;
    }else
    {
        printf("%c is not an alphabet.", x);
    }
    goto begin ;
finish:
    printf("\n###### YOU INITIATED EXIT COMMAND ######");
    printf("\n########################################");
    system("pause");
    
    return 0;
}