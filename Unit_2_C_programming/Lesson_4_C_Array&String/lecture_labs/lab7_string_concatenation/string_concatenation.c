/***************************************
 *   Mastering Embeded Systems Diploma  *
 *   Unit_2_C_programming               *
 *   Lesson_4_array&string              *
 ****************************************
 *   Lab number: Lab 7                  *
 *   Lab name: string concatenation     *
 *   Auther: Islam Abdelraouf           *
 *   Creation date: 09/10/2022          *
 *   Modified date: 09/10/2022          *
 ***************************************/
// linking C/C++ languages libraries
#include <stdio.h>
#include <string.h>

// main entry point
int main()
{
    // declaration section
    char phrase[100] = "";
    char str[8] = "Welcome";

    printf("\n\n\n\n=============== Console Starts ================\n");
    
    // add welcome    
    strcat(phrase, str);             
    
    // add to
    strcat(phrase, " to") ;  

    // add Egypt, everybody                   
    strcat(phrase, " Egypt, everybody") ;    

    printf("\n%s.\n", phrase);
    printf("\n================ Console Ends =================\n\n\n\n");
    return 0;
}