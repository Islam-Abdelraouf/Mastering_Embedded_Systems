/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Arrays)                                   *
*   Excercise number: 1                                   *
*   Excercise name: summation of 2 matrixes               *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 13/10/2022                             *
*   Modified date: 13/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>

//main entry point
int main()
{
    float arr1[2][2], arr2[2][2] , arr_sum[2][2] ;
    unsigned char row=0, col=0;


    printf("\n============== Console starts ===============\n");

    //population of the 1st matrix items
    printf("##enter the elements of the 1st matrix##\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("enter a%d%d: ", row + 1, col + 1);
            scanf("%f", &arr1[row][col]);
            fflush(stdin); fflush(stdout); //flushing of the stdin/stdout memory buffer
            
        }
    }

    //population of the 2nd matrix items
    printf("\n##enter the elements of the 2nd matrix##\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("enter b%d%d: ", row + 1, col + 1);
            scanf("%f", &arr2[row][col]);
            fflush(stdin); fflush(stdout); //flushing of the stdin/stdout memory buffer
            
        }
    }

    //population and printing out of the summation matrix items
    printf("\nSum Of Matrix: \n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {           
            arr_sum[row][col] = arr1[row][col] + arr2[row][col];
            printf("%.1f ", arr_sum[row][col]);
            fflush(stdin); fflush(stdout); //flushing of the stdout memory buffer           
        }
        printf("\n");
    }
    printf("=============== Console ends ================\n");
return 0;
}

