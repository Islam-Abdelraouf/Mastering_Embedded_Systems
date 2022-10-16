/*************************************************
*   Mastering Embeded Systems Diploma            *
*   Unit_2_C_programming                         *
**************************************************
*   Lab number: Lab 3                            *
*   Lab name: Minimum number (inline condition)  *
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
    int x, y, min_num;

    printf("Enter two values: ");
    scanf("%d %d" , &x , &y);

    min_num = (x<y)? x:y;
    printf("The minimum value is: %d" , min_num);

    return 0;
}



