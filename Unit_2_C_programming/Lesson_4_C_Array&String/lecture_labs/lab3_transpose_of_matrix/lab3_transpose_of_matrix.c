/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
*   Lesson_4_array&string              *
****************************************
*   Lab number: Lab 3                  *
*   Lab name: trnspose of 3x3 matrix   *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 09/10/2022          *
*   Modified date: 14/10/2022          *
***************************************/

// linked C/C++ language libraries
#include <stdio.h>

// main entry point
int main()
{
    /* decleration section starts here */
    float matrix_original[3][3], matrix_transposed[3][3] ;
    int row, col;

    printf("=============== Console Starts ===============\n\n");
    
    /* condition loop for tha main matrix data collection */
    for (row=0 ; row<3 ; row++)
    {
        for (col=0 ; col<3 ; col++)
        {
            printf("Enter item (%d,%d): ", row+1, col+1 );
            fflush(stdin) ; fflush(stdout) ;
            scanf("%f" , &matrix_original[row][col]);
        }
    }
    
    /* condition loop to populate the transpose matrix */
    for (row=0 ; row<3 ; row++)
    {
        for (col=0 ; col<3 ; col++)
        {
            matrix_transposed[row][col] = matrix_original[col][row];
        }
    } 


    /* condition loop to show the original matrix */
    printf("--- The original matrix ---\n") ;
    for (row=0 ; row<3 ; row++)
    {
        for (col=0 ; col<3 ; col++)
        {
            printf("%.1f " , matrix_original[col][row]) ;
        }
        printf("\n");
    }    

    /* condition loop to show the original matrix */
    printf("--- The transposed matrix ---\n") ;
    for (row=0 ; row<3 ; row++)
    {
        for (col=0 ; col<3 ; col++)
        {
            printf("%.1f " , matrix_transposed[col][row]) ;
        }
        printf("\n");
    } 

    printf("\n\n================ Console Ends ================");
    return 0;
}