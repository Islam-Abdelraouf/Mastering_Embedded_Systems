/**********************************************************
*   Mastering Embeded Systems Diploma                     *
*   Unit_2_C_programming                                  *
*   Lesson_4_array&string                                 *
***********************************************************
*   Homework_3 (Strings)                                  *
*   Excercise number: 1                                   *
*   Excercise name: character frequency in a string       *
*   Auther: Islam Abdelraouf                              * 
*   Creation date: 13/10/2022                             *
*   Modified date: 13/10/2022                             *
***********************************************************/

// Linked c/c++ libraries
#include <stdio.h>
#include <string.h>

//main entry point
int main()
{
    char str_phrase[100];
    unsigned char counter = 0;
    unsigned char userChar=0;
    unsigned char charFrequency=0;

    printf("\n============== Console starts ===============\n");

    //population of the 1st matrix items
    printf("--Enter a string: ");
    fflush(stdin); fflush(stdout); //flushing of the stdin/stdout memory buffer
    fgets(str_phrase, sizeof(str_phrase), stdin);

    //search the character in the array of elements
    printf("\n--Enter a character to find its frequency: ");
    fflush(stdin); fflush(stdout); //flushing of the stdin/stdout memory buffer
    scanf("%c" , &userChar) ;

    for (counter = 0; counter < strlen(str_phrase); counter++)
    {
        if (str_phrase[counter] == userChar)
        {
            charFrequency++;
        }
    }
    printf("\nFrequency of %c = %d\n", userChar, charFrequency);
            
    printf("\n=============== Console ends ================\n");
return 0;
}

