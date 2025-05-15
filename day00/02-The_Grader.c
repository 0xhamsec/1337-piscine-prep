/*========================================================*/
// Write a program that asks for a grade from 0 to 100 and gives the corresponding letter according to the following:
// 90–100: A
// 80–89:  B
// 70–79:  C
// 60–69:  D
// Less than 60: F
// Required Concepts: else-if ladder , relational operators .
/*=========================================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("what is Your Grad? : ");
    scanf("%d",&grade);

    if (grade > 100)
    {
        printf("plesae Enter a grade from 0 to 100! \n");
        return EXIT_FAILURE;
    }

    if (grade >= 90)
    {
        printf("your grade is A\n");
    }

    else if (grade >= 80)
    {
        printf("your grade is B\n");
    }

    else if (grade >= 70)
    {
        printf("your grade is C\n");
    }

    else if (grade >= 60)
    {
        printf("your grade is D\n");
    }

    else
        printf("your grade is F\n");

    return EXIT_SUCCESS;
    
}

