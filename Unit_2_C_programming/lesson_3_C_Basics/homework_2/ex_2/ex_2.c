/*************************************************************
 *   Mastering Embeded Systems Diploma                        *
 *   Unit_2_C_programming                                     *
 **************************************************************
 *   Homework 2                                               *
 *   Excercise number: 2                                      *
 *   Excercise name: check vowels or consonants               *
 *   Auther: Islam Abdelraouf                                 *
 *   Creation date: 23/09/2022                                *
 *   Modified date: 23/09/2022                                *
 *************************************************************/

// Linked c/c++ libraries
#include <stdio.h>
#include <string.h>

// main entry point
int main()
{
    char a; //decleration

    printf("\n############## Console-Output ##############");

begin:
    //getting information from the user
    printf("\nplease enter an alphabet to check, or '1' to exit: ");
    scanf("%c", &a);
    fflush(stdin); fflush(stdout);

    // logic gate to check the charactar type
    if (a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U' ||
        a == 'e' || a == 'E' || a == 'a' || a == 'A')
    {
        printf("%c is a vowel.", a);
    }
    else if (a == '1')
    {
        goto finish;
    }
    else
    {
        printf("%c is a consonant.", a);
    }
    goto begin;
finish:
    printf("############################################");

    return 0;
}