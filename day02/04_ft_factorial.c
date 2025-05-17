/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This recursive function returns the factorial of a non-negative int.  */
/*     Example: 5! = 5 * 4 * 3 * 2 * 1 = 120                                  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_factorial(int number)
{
    if (number == 0)
        return 1;
    return number * ft_factorial(number - 1);
}

int main()
{
    printf(" %d ",ft_factorial(5));
}