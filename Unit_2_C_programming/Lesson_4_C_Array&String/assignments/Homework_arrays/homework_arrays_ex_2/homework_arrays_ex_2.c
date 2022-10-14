/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Arrays)                                   *
*   Excercise number: 2                                   *
*   Excercise name: average of array elements             *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 13/10/2022                             *
*   Modified date: 13/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{
    //declaration and initialization stage
    float arr1[100];
    int counter=0, element_no=0;
    float sum=0.0, average=0.0;
    
    printf("\n============== Console starts ===============\n");

    //getting the user input for the number of the elements
    printf("## Enter elements number between 2 to 100: ");
    scanf("%d" , &element_no);
    fflush(stdin);fflush(stdout); // flushing of the stdin/stdout memory buffer
    printf("\n");

    // check if the total number of elements is between 2 and 100
    if (element_no > 1 && element_no < 101)
    {
        // main data entry loop (getting all alements' values from the user)
        for (counter = 0; counter < element_no ; counter++)
        {
            printf("Enter element %d: ", counter + 1);
            fflush(stdin); fflush(stdout); // flushing of the stdin/stdout memory buffer
            scanf("%f", &arr1[counter]);
        
            sum += arr1[counter] ;
        }
    }

    average = sum / counter ;

    //population and printing out of the summation matrix items
    printf("\nAverage = %.2f " , average);

    printf("\n=============== Console ends ================\n");
return 0;
}

