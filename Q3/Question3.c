/*
This program prompts for the colors of three bands of a resistor, and displays the * value of the
resistance in kilo-ohms based on a color code
*/

#include <stdio.h>
#include <math.h> /* for pow*/
#include <ctype.h> /* for toupper*/
#include <string.h> /* for strlen*/
#define NOT_FOUND -1 /* constants */
#define SUB_1 10
#define SUB_2 7

int search(const char [][SUB_2], const char [], int);
int main(void)
{

    char reply,                 /* user reply*/
    char_left;                  /* character left in the input stream*/
    int i;
    int counter;                /* counters */
    int value;                  /* subscript of target found in list*/
    double answer = 0.0;        /* value of resistor in kilo-ohms*/
    int no_error = 1;           /* denotes no error */

    /* initializing the array*/

    char COLOR_CODES[SUB_1][SUB_2] = {"black", "brown", "red", "orange","yellow", "green",
    "blue", "violet", "gray", "white"}; char target[SUB_2]; /* target string array*/

    do
    {
        printf("Enter the colors of the resistor's three bands, beginning with\n");
        printf("the band nearest the end. Type the colors in lowercase letters only, ");
        printf("NO CAPS.\n\n");
        
        for(counter = 1; ►; counter++)                  /* (1 mark) */
        {                                   

            printf("Band %d => ", counter);
            scanf("%s", target);
        
            value = search(►, ►, SUB_1);                 /* (0.5 mark) */

            /* searches for string*/
            if(value != NOT_FOUND) 
            {
                switch(counter)
                {
                    case 1:
                        answer = value * ►;             /* (0.5 mark) */
                        break;
                    case 2:
                        answer += value;
                        break;
                    case 3
                        if (value>3)
                            answer+=pow(►);             /* (0.5 mark) */
                        else
                            for(i = 0; ►; i++)          /* (0.5 mark) */
                                answer /= 10;
                }
            }
            else
                no_error = 0; /* if string not found*/
        }

    if (►) /* (1 mark) */
        printf("Resistance value: %.3f kilo-ohms\n\n", answer);
    else
        printf("Invalid Color: %s\n\n", target);

    printf("Do you want to decode another resistor?\n => ");
    scanf("%c%c", &char_left, &reply);
    printf("\n");
    } while(►); /* (1 mark) */
}

/* function takes as input a list of strings, its size, and a target string. Then, searches the list for the
target and returns as its value the subscript of the target in the list. It returns -1 if target is not found.
*/
int search(const char COLOR_CODES[][SUB_2], const char target[], int size)
{
    int i, j; /* counters */
    int length, counter=0;
    int found = 0; /* indicates when string is found*/
    int where = 0; /* location of target*/
    
    length = strlen(►); /* (1 mark) */
    for(i=0; ►; i++) /* (1 mark) */
    { 
        for(j = 0; j < length; j++)
            if(►== target[j]) /* (1 mark) */
                counter++;
        if(counter == length)
            found = 1;
        else
            counter=0;
    }
    --i;
    if(found)
        where = ►; /* (1 mark) */
    else
        where = ►; /* (1 mark) */
    return where;
}
