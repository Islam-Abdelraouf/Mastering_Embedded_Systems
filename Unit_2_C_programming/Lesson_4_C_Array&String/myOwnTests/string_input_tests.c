#include <stdio.h>
#include <string.h>

int main()
{
    // decleration section
    char str_buffer[35];

    printf("\n\n================ Console starts ===============\n");

    //**********************************************************************************************
    // reading text and assigning it to the char array variable 'str_buffer'
    // using scanf() with format %s  
    // this is going to pick the text untill the first space only, no matter how long is the text.
    printf("\n\nenter some words with spaces: ");
    scanf("%s" , str_buffer);
    fflush(stdin); fflush(stdout);
    printf("picking the first word only': %s" , str_buffer);

    //**********************************************************************************************
    // the issue with using the gets() function is that it doesn't monitor the max. number of 
    // elements in the buffered array
    // in order to avoid overflowing the array with no. of characters beyond the max. no. of 
    // elemenets, we can 
    printf("\n\nenter a long text with no spaces: ");
    scanf("%10s" , str_buffer);
    printf("picking the first 10 characters only, without no spaces: %s" , str_buffer);

    //**********************************************************************************************
    // reading one complete line and assigning it to the char array variable 'str_buffer'
    // using %[^\n] sequence 
    // it instructs the scanf funcion to read all characters till the user hits the 'Enter' button
    printf("\n\nenter long text with spaces: ");
    fflush(stdin); fflush(stdout);
    scanf("%[^\n]" , str_buffer);
    printf("'[^\\n] method text': %s" , str_buffer);
 
    //**********************************************************************************************
    // reading one complete line and assigning it to the char array variable 'str_buffer'
    // using the gets() function 
    // it can read all characters till the user hits the 'Enter' button
    printf("\n\nenter long text with spaces: ");
    fflush(stdin); fflush(stdout);
    gets(str_buffer);
    printf("'gets() method text': %s" , str_buffer);


    
    printf("\n================= Console ends ================\n\n");
    return 0;
}