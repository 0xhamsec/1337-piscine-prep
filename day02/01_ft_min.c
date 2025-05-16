/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function returns the smaller of two integer values.              */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_min(int n1, int n2)
{
    if (n1 > n2)
        return n2;
    return n1;
}

int main()
{
    int a = 13;
    int b = 37;
    int res = ft_min(a,b);
    printf("%d\n",res);
}
