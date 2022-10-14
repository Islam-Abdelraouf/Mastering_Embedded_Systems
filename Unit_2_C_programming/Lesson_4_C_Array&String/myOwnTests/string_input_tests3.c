#include <stdio.h>
#include <conio.h>
int main()
{
    float x,y;
    do
    {
        printf("\nenter the value of x: ");
        fflush(stdin); fflush(stdout);

        scanf("%f" , &x);
        y=5*x*x+3*x+2;
        printf("\ny(%f)=%f" ,x,y);
        printf("\ndo you want to evaluate again (y/n):");
    } while (getche()=='y');
    
    return 0;
}