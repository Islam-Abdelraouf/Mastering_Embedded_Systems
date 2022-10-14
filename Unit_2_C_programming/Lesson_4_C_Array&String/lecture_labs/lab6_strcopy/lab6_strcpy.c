/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
*   Lesson_4_array&string              *
****************************************
*   Lab number: Lab 6                  *
*   Lab name: strcopy function         *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 09/10/2022          *
*   Modified date: 09/10/2022          *
***************************************/

//linking C/C++ language libraries
#include <stdio.h>
#include <string.h>

//main entry point
int main()
{
    printf("=============== Console Starts ===============\n\n");
    
    //decleration section
    char str1[20] = "Keroles Shenouda" ;  
    char str2[20] ;
    
    strcpy(str2,str1);
    printf("copied name : %s.\n" , str2);
    printf("number of characters = %d.\n" , strlen(str2));

    printf("\n================ Console Ends ================");
    return 0;
}