/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function returns base raised to the power exponent recursively.  */
/*     Example: ft_power(2, 3) => 8                                           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_power(int number, int power)
{
    int res = 1;
    if (power < 0)
        return 0;
    while (power > 0)
    {
        res =  res * number;
        power = power - 1;
    }
    return res;
}

int main(void)
{
    printf("2^3 = %d\n", ft_power(2, 3)); // 8
    printf("5^0 = %d\n", ft_power(5, 0)); // 1
    printf("3^4 = %d\n", ft_power(3, 4)); // 81
    printf("2^-2 = %d\n", ft_power(2, -2)); // 0 (not supported)

    return 0;
}
