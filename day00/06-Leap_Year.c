/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leap_year_oracle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Level: Easy
**
** Description:
** This program checks whether a given year is a leap year.
** A leap year is:
**   - Divisible by 4 and not divisible by 100,
**   - Unless it is also divisible by 400.
**
** Required Concepts:
**   - Logical operators
**   - Conditional statements
*/


#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
