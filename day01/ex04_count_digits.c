/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_count_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask the user to input a number. Count how many digits it has using a while loop.
*/

#include <stdio.h>

int main()
{
    int number;
    int count = 1;

    printf("Enter a Number: ");
    scanf("%d",&number);

    while (number != 0)
    {
        number = number / 10 ;

        if (number != 0)
        {
            count = count + 1;
        }
    }

    printf("the number has %d digits \n",count);

}