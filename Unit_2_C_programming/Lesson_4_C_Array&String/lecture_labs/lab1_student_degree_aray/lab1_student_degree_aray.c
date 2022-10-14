/********************************************************
*   Mastering Embeded Systems Diploma                   *
*   Unit_2_C_programming                                *
*   Lesson_4_array&string                               *
*********************************************************
*   Lab number: Lab 1                                   *
*   Lab name: store & print 10 students degrees         *
*   Auther: Islam Abdelraouf                            * 
*   Creation date: 09/10/2022                           *
*   Modified date: 14/10/2022                           *
*********************************************************/

//linked C/C++ language libraries
#include <stdio.h>

//main entry point
int main()
{
    //decleration
    float students_deg[10];
    int counter ;

    printf("=============== Console Starts ===============\n\n");
    
    //main data entry loop
    for(counter=0 ; counter<10 ; counter++)
    {
        printf("Enter Student %d degree: " , counter+1);  
        fflush(stdin); fflush(stdout);
        scanf("%f" , &students_deg[counter]);
    }

    //main data output loop
    for(counter=0 ; counter<10 ; counter++)
    {
        printf("\nStudent %d degree is %f" , counter+1 , students_deg[counter]);  
    }

    printf("\n\n================ Console Ends ================");
    return 0;
}