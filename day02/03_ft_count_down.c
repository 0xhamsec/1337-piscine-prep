/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function prints numbers from n down to 0 using only write.       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_number(int n)
{
    if (n > 9)
    {
        print_number(n / 10);
    }

    char digit = (n % 10) + 48;
    write(1,&digit,1);
}

void    ft_count_down(int n)
{
    while (n >= 0)
    {
        print_number(n);
        n = n - 1;
    }
}

int main()
{
    ft_count_down(100);
}