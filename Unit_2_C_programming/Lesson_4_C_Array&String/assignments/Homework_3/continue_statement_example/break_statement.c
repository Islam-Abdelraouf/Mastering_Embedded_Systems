/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
*   Lesson_4_array&string              *
****************************************
*             Homework_3               *
*   example of break statement         *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 13/10/2022          *
*   Modified date: 13/10/2022          *
***************************************/

// Linked c/c++ libraries

#include <stdio.h>
int main()
{
    int x,counter;
    float num, total=0.0, average=0.0;

    printf("enter maximum number of inputs: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&counter);
    
    for(x=0; x<counter ; x++)
    {
        printf("enter number %d: " , x+1);
        fflush(stdin); fflush(stdout);
        scanf("%f",&num);

        if (num<0.0) break;
        total += num;
        //printf("\ntotal: %f\n",total);
    }
    average = total/(x);
    printf("total= %.2f & average = %.2f" , total, average);

    printf("\n######################################\n");

return 0;
}

