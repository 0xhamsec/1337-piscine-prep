/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_mystic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Level: Medium
**
** Description:
** This program asks the user to input a 3-digit integer, then:
**   - Reverses the number
**   - Checks if the original and reversed numbers are equal (palindrome)
**
** Required Concepts:
**   - Integer manipulation
**   - Modulo and division
**   - Logical thinking
*/

#include <stdio.h>

int main()
{
    int original;
    int reversed;
    int hundreds, tens, units;
    
    printf("Enter a 3-digit integer: ");
    scanf("%d",&original);

    hundreds = original / 100;
    tens = (original / 10) % 10;
    units = original % 10;

    reversed = (units * 100) + (tens * 10) + (hundreds * 1);

    if (original == reversed)
    {
        printf("the number %d is a palindrome ", original);
    }
    else
        printf("the number %d is Not a palindrome ", original);

return 0;
}