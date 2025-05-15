/*===========================================================*/
//  Write a program that asks the user to enter a password (the correct password is "OpenSesame" )
//  and then displays "Access Granted" if correct, or "Access Denied" if wrong.
//  Required Concepts: if statement , scanf , strcmp
/*===========================================================*/

#include <stdio.h>
#include <string.h>

int main()
{
    char password[11];

    printf("enter a password: ");
    scanf("%s", password);

    if(strcmp(password,"OpenSesame") == 0)
    {
        printf("Access Granted\n");
    }
    else
        printf("Access Denied\n");

}