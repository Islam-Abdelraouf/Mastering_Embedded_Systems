/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Lab number: Lab 4                            *
*   Lab name: Summation of numbers from 1 to 99  *
*   Auther: Islam Abdelraouf                     * 
*   Creation date: 22/09/2022                    *
*   Modified date: 22/09/2022                    *
*************************************************/

//Linked c/c++ languages libraries  
#include <stdio.h>

//main entry function
int main()
{

    // local declerations section
    int x, sum_num=0;

    for(x=1 ; x<100 ; x++)
    {
        sum_num = sum_num + x ;
    }
    printf("\nThe summation value is: %d" , sum_num);

    return 0;
}



