/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function returns the reverse of the digits of an integer.        */
/*     Example: 1234 => 4321                                                 */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int reverse_number(int n)
{
    int reversed = 0;
    int negative = 0;

    if (n < 0)
    {
        negative = 1;
        n = -n; // Make n positive
    }

    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if (negative)
        reversed = -reversed;

    return reversed;
}


int main(void)
{
    int number = 1234;
    printf("Original: %d, Reversed: %d\n", number, reverse_number(number)); // Output: 4321

    number = -789;
    printf("Original: %d, Reversed: %d\n", number, reverse_number(number)); // Output: -987

    return 0;
}
