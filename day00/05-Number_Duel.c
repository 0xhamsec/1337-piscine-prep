/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_duel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Level: Very Easy
**
** Description:
** This program asks the user to input two integers, then prints:
**   - The greater number
**   - Or "They are equal." if both numbers are the same
**
** Required Concepts:
**   - if-else statements
**   - comparison operators
*/


#include <stdio.h>

int main()
{
    int Number_One;
    int Number_Two;

    printf("Enter first number: ");
    scanf("%d", &Number_One);

    printf("Enter second number: ");
    scanf("%d", &Number_Two);

    if (Number_One > Number_Two)
    {
        printf("The greater number is: %d\n", Number_One);
    }
    else if (Number_Two > Number_One)
    {
        printf("The greater number is: %d\n", Number_Two);
    }
    else
    {
        printf("They are equal.\n");
    }

    return 0;
}
