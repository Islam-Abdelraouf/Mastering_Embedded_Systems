/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Arrays)                                   *
*   Excercise number: 5                                   *
*   Excercise name: search an element in array            *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 14/10/2022                             *
*   Modified date: 14/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>
#include <stdlib.h>

// main entry point
int main()
{
    // declaration and initialization stage
    int array[100] , element_no=0;
    int counter=0 ;
    int userVal=0 , userValPosition=0;

    printf("\n============== Console starts ===============\n");

    // getting the user input for the number of elements
    printf("\n--Enter number of elements between 3 and 100: ");
    fflush(stdin); fflush(stdout); // flushing of the stdin/stdout memory buffer
    scanf("%d", &element_no);

    // check if the total number of elements is between 3 and 100
    if (element_no > 2 && element_no < 101)
    {
        // main data entry loop (populating all alements' values from the user)
        for (counter = 0; counter < element_no; counter++)
        {
            array[counter] = rand()%100;             // populating of the array elements
        }
        array[counter]='\0';
    }

    // Array elements
    printf("\n--Array elements--\n");
    for (counter = 0; counter < element_no; counter++)
    {
        printf("%d ", array[counter]);
    }

    printf("\n\nEnter the element to search: ") ;
    fflush(stdin);fflush(stdout) ;
    scanf("%d" , &userVal) ;

    // search the element in the loop
    for (counter = 0; counter < element_no; counter++)
    {
        if (array[counter] == userVal)
        {
            userValPosition = counter + 1;
            break;
        }
    }

    if (userValPosition != 0)
    {
        printf("\n*** the number was found at location = %d ***\n" , userValPosition);
    } else
    {
        printf("\n*** the number was not found ***\n") ;
    }
    
    printf("\n=============== Console ends ================\n");
    return 0;
}
