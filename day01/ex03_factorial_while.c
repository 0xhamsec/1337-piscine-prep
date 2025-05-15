/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_factorial_while.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask user for a number and print its factorial using a while loop.
*/

#include <stdio.h>

int main()
{
    int number;
    int count = 1;
    int factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1; // Return error code
    }

    while (count <= number)
    {
        factorial *= count;
        count++;
    }

    printf("The factorial of %d is %d.\n", number, factorial);
    return 0;
}
