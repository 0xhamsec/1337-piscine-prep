/*==========================================================================*/
// Write a program that asks the user to input a decimal number (float),
// and determines whether it's:
//  Positive
//  Negative
//  Zero
//  Required Concepts: if-else , floating-point handling, numeric precision.
/*==========================================================================*/

#include <stdio.h>

int main()
{
    float number;
    printf("Enter a decimal number: ");
    scanf("%2f",&number);

    if (number > 0)
    {
        printf("Positive\n");
    }
    else if (number < 0)
    {
        printf("Negative\n");
    }
    else
        printf("Zero\n");

    return 0;
}