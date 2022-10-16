/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Arrays)                                   *
*   Excercise number: 3                                   *
*   Excercise name: matrix transpose                      *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 13/10/2022                             *
*   Modified date: 14/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    // declaration and initialization stage
    int matrix[15][15];
    int matrix_trans[15][15];
    int row = 0, col = 0;
    int row_no = 0, col_no = 0;

    printf("\n============== Console starts ===============\n");

    // getting the user input for the matrix size
    printf("--Enter number of rows between 2 and 15: ");
    fflush(stdin); fflush(stdout); // flushing of the stdin/stdout memory buffer
    scanf("%d", &row_no);

    printf("--Enter number of cols between 2 and 15: ");
    fflush(stdin); fflush(stdout); // flushing of the stdin/stdout memory buffer 
    scanf("%d", &col_no);

    printf("\n");

    // check if the total number of rows and columns are between 2 and 15
    if (row_no > 1 && row_no < 16 && col_no > 1 && col_no < 16)
    {
        // main data entry loop (populating all alements' values from the user)
        for (row = 0; row < row_no; row++)
        {
            for (col = 0; col < col_no; col++)
            {
                printf("Enter value of Mat(%d)(%d): ", row + 1, col + 1);
                fflush(stdin);  fflush(stdout);             // flushing of the stdin/stdout memory buffer
                scanf("%d", &matrix[row][col]);             // filling the main matrix
                //matrix_trans[col][row] = matrix[row][col];  // filling the transposed matrix
            }
        }
    }

    // Filling the transposed matrix
    for (row = 0; row < col_no; row++)
    {
        for (col = 0; col < row_no; col++)
        {
            matrix_trans[row][col] = matrix[col][row]; // filling the transposed matrix
        }
    }

    // entered matrix
    printf("\nEntered Matrix\n");
    for (row = 0; row < row_no; row++)
    {
        for (col = 0; col < col_no; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    // transposed matrix
    printf("\nTransposed Matrix\n");
    for (row = 0; row < col_no; row++)
    {
        for (col = 0; col < row_no; col++)
        {
            printf("%d ", matrix_trans[row][col]);
        }
        printf("\n");
    }

    printf("\n=============== Console ends ================\n");
    return 0;
}
