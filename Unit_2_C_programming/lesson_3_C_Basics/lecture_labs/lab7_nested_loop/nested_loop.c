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

    int x , y ;

    for(x=0 ; x<10 ; x++)
    {
        for (y=x ; y<10 ; y++)
        {
            printf("%d " , y);
            if(y==9) printf("\n");
        }
    }

    return 0;
}


