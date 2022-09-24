/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Lab number: N.A.                             *
*   Lab name: skipping odd numbers               *
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
    int x;


    printf("\n\nSkipping all even numbers\n");    
    for (x=0 ; x<10 ; x++)
    {
        //logic gate 
        if (x%2 == 0)//(role of skipping all even numbers)
        {
            //printf("\nSkip displaying x = %d \n" , x);
            continue;
        }
        printf("%d " , x);
    }
    return 0;
}




