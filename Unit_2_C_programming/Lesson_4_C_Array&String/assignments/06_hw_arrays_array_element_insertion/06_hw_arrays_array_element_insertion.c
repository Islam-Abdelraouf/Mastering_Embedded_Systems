/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Arrays)                                   *
*   Excercise number: 4                                   *
*   Excercise name: array element insertion               *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 14/10/2022                             *
*   Modified date: 14/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    // declaration and initialization stage
    int array[100];
    int counter=0 , element_no=0 ;
    int userVal=0 , userValPosition=0;

    printf("\n============== Console starts ===============\n");

    // getting the user input for the number of elements
    printf("--Enter number of elements 3 and 100: ");
    fflush(stdin); fflush(stdout); // flushing of the stdin/stdout memory buffer
    scanf("%d", &element_no);

    // check if the total number of elements is between 3 and 100
    if (element_no > 2 && element_no < 101)
    {
        // main data entry loop (populating all alements' values from the user)
        for (counter = 0; counter < element_no; counter++)
        {
            array[counter] = counter+1;             // populating of the array elements
        }
        array[counter]='\0';
    }

    // Original array elements
    printf("\nOriginal array elements\n");
    for (counter = 0; counter < element_no; counter++)
    {
        printf("%d ", array[counter]);
    }

    // Modified array elements
    
    printf("\n\nEnter the element to be inserted: \n"); 
    fflush(stdin); fflush(stdout); // flushing the stdin/stdout memory buffer
    scanf("%d" , &userVal);

    printf("\nEnter the element location/number: \n");  
    fflush(stdin); fflush(stdout); // flushing the stdin/stdout memory buffer
    scanf("%d" , &userValPosition);

    if(userVal>0 && userValPosition>0)
    {
        array[userValPosition-1] = userVal;
        printf("\nModified array elements\n");
        for (counter = 0; counter < element_no; counter++)
        {
            printf("%d ", array[counter]);
        }        
    } 
    
/* 
    printf("\nModified array elements\n");
    for (counter = 0; counter < element_no; counter++)
    {
        if((counter+1) == userValPosition)
        {
            array[counter] = userVal;
            printf("%d ", array[counter]);
        }else
        {
            printf("%d ", array[counter]);
        }
        
    } */

    printf("\n=============== Console ends ================\n");
    return 0;
}
