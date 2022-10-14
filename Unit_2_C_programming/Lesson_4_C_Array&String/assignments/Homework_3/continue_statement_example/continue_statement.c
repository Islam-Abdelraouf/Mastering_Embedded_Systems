/***************************************
 *   Mastering Embeded Systems Diploma  *
 *   Unit_2_C_programming               *
 *   Lesson_4_array&string              *
 ****************************************
 *             Homework_3               *
 *   example of continue statement      *
 *   Auther: Islam Abdelraouf           *
 *   Creation date: 13/10/2022          *
 *   Modified date: 14/10/2022          *
 ***************************************/

// Linked c/c++ libraries
#include <stdio.h>

// main entry point
int main()
{
    // decleration and initialization section
    int x;
    float num, product = 1.0;

    printf("\n=============== Console starts ===============\n") ;
    printf("enter 4 numbers for multiplication: \n");
    
    // condition loop to pick the numbers from the user
    for (x = 0; x < 4; x++)
    {
        printf("enter number %d: ", x + 1);
        fflush(stdin); fflush(stdout);
        scanf("%f", &num);

        if (num == 0) { continue; }
        product *= num;
    }
    printf("\nproduct= %.2f", product);
    printf("\n================ Console Ends ================\n") ;
    return 0;
}