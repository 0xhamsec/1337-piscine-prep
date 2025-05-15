/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05_password_retry.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask user to enter the correct password. Repeat until correct using do while.
** Example password: 1337
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char password[5];
    do
    {
        printf("Please Enter the correct password: ");
        scanf("%s",password);

    } while (strcmp(password,"1337") != 0);

    printf("=====================================\n");
    printf("=                                   =\n");
    printf("=         ACCESS GRANTED            =\n");
    printf("=       Welcome to the System       =\n");
    printf("=                                   =\n");
    printf("=====================================\n");
    
    return 0;
}