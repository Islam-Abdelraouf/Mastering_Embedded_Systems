/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Lab number: N.A.                             *
*   Lab name: skipping odd numbers (while loop)  *
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
    int x = 0;

    printf("\n\nSkipping all even numbers\n");    
    do {
        //logic gate 
        if (x%2 == 0)//(role of skipping all even numbers)
        {
            x++;
            continue;
        }
        printf("%d " , x);  
        x++;      
    } while(x<10);

    return 0;
}




