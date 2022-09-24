/***************************************
*   Mastering Embeded Systems Diploma  *
*   Unit_2_C_programming               *
****************************************
*   Lab number: Lab 2                  *
*   Lab name: Number Comparison        *
*   Auther: Islam Abdelraouf           * 
*   Creation date: 22/09/2022          *
*   Modified date: 22/09/2022          *
***************************************/

//linked c/c++ languages libraries  
#include <stdio.h>                     
#include <math.h>                      

//main entry function
int main()
{
    // local declerations section
    unsigned char num1, num2, num3, max_num;

    //reading three numbers between 0 and 255, as user inputs
    printf("Enter three different numbers between 0 and 255: \n\n");
    printf("Enter the first number: \t");
    scanf("%d" , &num1);
    //Flushing the input/output buffer, to avoid the VS code bug
    fflush(stdin); fflush(stdout);    
    
    printf("Enter the second number: \t");
    scanf("%d" , &num2);
    //Flushing the input/output buffer, to avoid the VS code bug
    fflush(stdin); fflush(stdout);       
    
    printf("Enter the third number: \t");
    scanf("%d" , &num3);
    //Flushing the input/output buffer, to avoid the VS code bug
    fflush(stdin); fflush(stdout); 

    // logic gate
    if ((num1>=0 && num1<256) && 
        (num2>=0 && num2<256) && 
        (num3>=0 && num3<256))
    {
        if(num1>num2)
        {
            if(num1>num3)
            {
                max_num = num1;  
            } else {
                max_num = num3;
            }
        } else {
            if (num2>num3)
            {
                max_num = num2;
            }else {
                max_num = num3;
            }
        }
        printf("\n\nThe biggest number is:\t\t%d" , max_num);
    }
        
    return 0;
}