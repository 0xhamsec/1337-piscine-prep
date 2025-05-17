/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function checks if an integer is a prime number.                 */
/*     Returns 1 if prime, 0 otherwise.                                      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_is_prime(int number)
{
    int i;

    if (number <= 1)
        return 0; // 0 and 1 are not prime numbers

    i = 2;
    while (i * i <= number)
    {
        if (number % i == 0)
            return 0; // Not prime
        i++;
    }
    return 1; // Prime
}

int main()
{
    printf(" %d ",ft_is_prime(7));
}