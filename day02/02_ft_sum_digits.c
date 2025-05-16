/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function returns the sum of all digits in a positive integer.    */
/*     Example: 123 => 1 + 2 + 3 = 6                                          */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sum_digits(int number)
{
    int sum = 0;
    int digit;
    
    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    return sum;
}

int main()
{
    int number = 123;
    int res = ft_sum_digits(number);
    printf("%d\n",res);

}