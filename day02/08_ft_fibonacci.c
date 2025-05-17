/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This recursive function returns the nth number in the Fibonacci seq.  */
/*     Example: 0 1 1 2 3 5 8 13 ...                                          */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;              // Error case: Negative index
    if (index == 0)
        return 0;               // Base case 1
    if (index == 1)
        return 1;               // Base case 2
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(void)
{
    int n = 7;
    printf("Fibonacci(%d) = %d\n", n, ft_fibonacci(n)); // Output: 13
    return 0;
}
