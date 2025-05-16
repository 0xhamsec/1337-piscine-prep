/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_even.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function checks if a given number is even.                        */
/*     Returns 1 if the number is even, 0 otherwise.                          */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int number;

    printf("Number: ");
    scanf("%d",&number);
    int res = ft_is_even(number);
    printf("%d",res);
}