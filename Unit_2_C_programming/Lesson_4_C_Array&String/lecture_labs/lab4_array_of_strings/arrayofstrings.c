/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
*   Lesson_4_array&string              *
****************************************
*   Lab number: Lab 4                  *
*   Lab name: array of strings         *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 09/10/2022          *
*   Modified date: 09/10/2022          *
***************************************/

//linked C/C++ language libraries
#include <stdio.h>

//main entry point
int main()
{
    int i;
    //decleration
    char str_names[5][14] = {"Ahmed Alaa" , "Mohamed ALi" , "Sayed Hussien" , "Kamal Elsayed" , "Amir Hemdan" };

    printf("=============== Console Starts ===============\n\n");
    
    //main output loop
    for(i=0;i<5;i++)
    {
        switch (i) //logic gate
        {
        case 0:
            printf("1st person name is: %20s\n" , str_names[i]);  //i=0 -> row 0 address
            break;
        case 1:
            printf("2nd person name is: %20s\n" , &str_names[i]); //i=1 -> row 1 address
            break;
        case 2:
            printf("3rd person name is: %20s\n" , &str_names[i]); //i=2 -> row 2 address
            break;
        case 3:
            printf("4th person name is: %20s\n" , &str_names[i]); //i=3 -> row 3 address
            break;
        case 4:
            printf("5th person name is: %20s\n" , &str_names[i]); //i=4 -> row 4 address
            break;
        default:
           break;
        }
    }

    printf("\n\n================ Console Ends ================");
    return 0;
}