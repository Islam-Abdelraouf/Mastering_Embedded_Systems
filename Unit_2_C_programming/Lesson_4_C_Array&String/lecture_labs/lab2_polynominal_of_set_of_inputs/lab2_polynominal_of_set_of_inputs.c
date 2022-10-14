/********************************************************
*   Mastering Embeded Systems Diploma                   *
*   Unit_2_C_programming                                *
*   Lesson_4_array&string                               *
*********************************************************
*   Lab number: Lab 2                                   *
*   Lab name: polynominal value for set of inputs       *
*   Auther: Islam Abdelraouf                            * 
*   Creation date: 09/10/2022                           *
*   Modified date: 14/10/2022                           *
*********************************************************/

//linked C/C++ language libraries
#include <stdio.h>

//main entry point
int main()
{
    float x[5] = {5, 16, 22, 3.5, 15};
    float y;
    int counter;

    printf("=============== Console Starts ===============\n\n");

    for(counter=0; counter<5; counter++)
    {    
        y = 5 * x[counter] * x[counter] + 3 * x[counter] + 2;
        printf("Y(%4.1f) = %4.1f\n" ,x[counter],y);
    }    
    printf("\n\n================ Console Ends ================");

    return 0;
}