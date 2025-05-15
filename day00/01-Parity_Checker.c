/*========================================================*/
// Write a program that asks the user to enter an integer, 
// then determines whether the number is Even or Odd
/*=========================================================*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    int number;

    printf("Enter an Integer: ");
    scanf("%d",&number);

    bool isEven = (number % 10) == 0 ? true : false;
    if (isEven)
    {
        printf("The number %d is Even",number);
    }
    else
        printf("The number %d is Odd",number);

}