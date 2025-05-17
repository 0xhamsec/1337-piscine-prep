/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_palindrome.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xhamsec <0xhamsec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:00:00 by 0xhamsec          #+#    #+#             */
/*   Updated: 2025/05/15 00:00:00 by 0xhamsec         ###   ########.fr       */
/*                                                                            */
/*   Description:                                                             */
/*     This function checks whether an integer is a palindrome or not.       */
/*     Returns 1 if it is, 0 otherwise.                                       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int reverse_number(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int is_palindrome(int n)
{
    if (n < 0)
        return 0;

    return (n == reverse_number(n));
}

int main(void)
{
    int number = 1221;
    if (is_palindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
