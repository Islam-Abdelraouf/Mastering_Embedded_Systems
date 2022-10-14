/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
*   Lesson_4_array&string              *
****************************************
*   Lab number: Lab 5                  *
*   Lab name: copy of strings          *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 09/10/2022          *
*   Modified date: 09/10/2022          *
***************************************/

//linking C/C++ language libraries
#include <stdio.h>

//main entry point
int main()
{
    printf("=============== Console Starts ===============\n\n");
    
    //decleration section
    char str1[20] = "Alaa Ezzat" ;  
    char str2[20] ;
    int i ;

    // (01) while loop method ******************************************
    i = 0 ; //reset the counter
    while (str1[i] != 0)
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = 0; //add the null termination to the end of str2
    printf("name with while loop: %s.\n" , str2);
    // *****************************************************************

    // (02) for loop method ********************************************
    for(i=0 ; (i<20 && str1[i]!=0) ; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = 0; //add the null termination to the end of str2
    printf("name with for loop: %s.\n" , str2);
    //******************************************************************

    printf("================ Console Ends ================\n\n");
    return 0;
}



