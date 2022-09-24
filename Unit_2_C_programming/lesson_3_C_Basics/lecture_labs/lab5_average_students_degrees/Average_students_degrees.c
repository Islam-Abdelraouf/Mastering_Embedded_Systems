/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Lab number: Lab 5                            *
*   Lab name: Average students degrees           *
*   Auther: Islam Abdelraouf                     * 
*   Creation date: 23/09/2022                    *
*   Modified date: 23/09/2022                    *
*************************************************/

//Linked c/c++ languages libraries  
#include <stdio.h>

//main entry point
int main()
{

    //local declarations
    int x, stud_num, stud_deg, tot_deg=0;
    float deg_average;

    printf ("Enter students number: ");
    scanf ("%d" , &stud_num);
    printf ("\n");
    //flushing the input/output buffer, to avoid the VS code bug
    fflush(stdin); fflush(stdout);

    for (x=1 ; x<=stud_num ; x++)
    {
        printf("Enter student (%d) degree: " , x);
        scanf("%d" , &stud_deg);
        printf("\n");
        //flushing the input/output buffer, to avoid the VS code bug
        fflush(stdin); fflush(stdout); 

        tot_deg += stud_deg;
    }

    deg_average = (float)tot_deg / stud_num;
    printf("Average students degree = %.3f degrees." , deg_average);

    return 0;
}




