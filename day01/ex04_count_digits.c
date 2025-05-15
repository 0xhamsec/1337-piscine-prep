/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_count_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask the user to input a number. Count how many digits it has using a while loop.
*/

#include <stdio.h>

int main()
{
    int number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0)
    {
        number = -number;  // Manual absolute value
    }

    // Handle zero explicitly
    if (number == 0)
    {
        count = 1;
    }
    else
    {
        while (number != 0)
        {
            number = number / 10;
            count++;
        }
    }

    printf("The number has %d digit(s).\n", count);
    return 0;
}
