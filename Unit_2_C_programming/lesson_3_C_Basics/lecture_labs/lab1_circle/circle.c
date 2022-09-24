/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
****************************************
*   Lab number: Lab 1                  *
*   Lab name: Circle calculations      *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 22/09/2022          *
*   Modified date: 22/09/2022          *
***************************************/

//linked c/c++ languages libraries  
#include <stdio.h>                     
#include <math.h>                      

//main entry function
int main()
{
    // local declerations section
    char choice;
    float radius;
    float area, circumference;

    //reading the circle radius
    printf("\nEnter circle radius in cm: ");
    scanf("%f" , &radius);
    
    fflush(stdin); fflush(stdout); //Flushing the input/output buffer, to avoid the VS code bug
    
    //reading the user choice, 'area' or 'circumference'
    printf("Enter 'a' for the area, or 'c' for the circumference: ");
    scanf("%c" , &choice);

    // logic gate
    if (choice == 'a')
    {
        area = 3.14159 * radius * radius;
        printf("The circle area = %.2f square cm.\n", area);
    }else if(choice == 'c')
    {
        circumference = 2 * 3.14159 * radius;
        printf("The circle circumference = %.2f cm.\n", circumference);
    }
        
    return 0;
}