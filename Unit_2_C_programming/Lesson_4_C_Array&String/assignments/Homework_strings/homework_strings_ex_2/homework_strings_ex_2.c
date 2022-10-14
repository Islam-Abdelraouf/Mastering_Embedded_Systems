/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Strings)                                  *
*   Excercise number: 2                                   *
*   Excercise name: calculation of the length of a string *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 14/10/2022                             *
*   Modified date: 14/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{
    char string[100] ;
    unsigned char counter=0, str_length=0;


    printf("\n============== Console starts ===============\n");

    printf("\nEnter a string with no spaces: ");
    fflush(stdin) ; fflush(stdout) ; 
    gets(string);

/*     while((counter<sizeof(string)) && string[counter] != '\0')
    {

    } */

    for (counter = 0; counter < sizeof(string); counter++)
    {
        if (string[counter] != '\0')
        {
            str_length++ ;
        }
        else
        {
            break;
        }
    }

    printf("Length of string = %d\n" , str_length);

    printf("\n=============== Console ends ================\n");
return 0;
}

