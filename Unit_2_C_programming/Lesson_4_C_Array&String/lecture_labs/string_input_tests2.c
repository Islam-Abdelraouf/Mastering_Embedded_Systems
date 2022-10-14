#include <stdio.h>
#include <string.h>

int main()
{
    // decleration section
    char str_buffer[35];

    printf("\n\n================ Console starts ===============\n");

    //**********************************************************************************************
    // reading text and assigning it to the char array variable 'str_buffer'
    // using sgets() with   
    // this is going to pick the text untill the first space only, no matter how long is the text.
    printf("\n\nenter some words with spaces: ");
    fgets(str_buffer, 35, stdin);


    char counter ;

    for(counter=0 ; counter<=strlen(str_buffer) ; counter++)
    {
        if(str_buffer[counter] == 10) {str_buffer[counter]=0;}
        printf("%d " , str_buffer[counter]);
    }

    printf("\n%s" , str_buffer);
    printf("\n================= Console ends ================\n\n");
    return 0;
}