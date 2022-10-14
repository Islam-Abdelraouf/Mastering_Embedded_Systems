/**************************************************************
*   Mastering Embeded Systems Diploma                         *
*   Unit_2_C_programming                                      *
*   Lesson_4_array&string                                     *
***************************************************************
*   Homework_3 (Strings)                                      *
*   Excercise number: 3                                       *
*   Excercise name: reverse a string without using C functions*
*   Auther: Islam Abdelraouf                                  * 
*   Creation date: 14/10/2022                                 *
*   Modified date: 14/10/2022                                 *
***************************************************************/

// Linked c/c++ libraries
#include <stdio.h>
#include <string.h>

//main entry point
int main()
{
    // decleration and initialization section
    char str_normal[100] ;
    char str_reverse[100] ;
    int counter , str_length , str_pos ;

    printf("\n============== Console starts ===============\n");

    // picking the string from the user, using gets to pick a whole line including all spaces
    printf("\nEnter a string with no spaces: ");
    fflush(stdin) ; fflush(stdout) ; 
    gets(str_normal); 

    // loop range preparation
    str_length = strlen(str_normal)-1 ; // length of the string
    str_pos = 0 ;                       // cursor position for the reverse string array

    // main loop for population of the reverse string array
    for (counter=str_length; counter>=0; counter--)
    {
        str_reverse[str_pos] = str_normal[counter] ;
        str_pos++;
    }
    // addition of the interruption zero element
    str_reverse[str_pos]='\0'; 

    printf("\nreverse string is: %s\n" , str_reverse);

    printf("\n=============== Console ends ================\n");
return 0;
}