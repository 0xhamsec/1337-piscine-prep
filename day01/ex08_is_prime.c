/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08_is_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask user for a number. Use a while loop to check if it's prime.
*/

#include <stdio.h>

int main()
{
    int count = 2;
    int number;
    int is_prime = 1;

    printf("Enter a number: ");
    scanf("%d",&number);

    while (count * count <= number)
    {
        if (number % count == 0)
        {
            is_prime = 0;
            break;
        }
        count++;
    }

    if (is_prime)
    {
        printf("the %d is a Prime number\n",number);
    }
    else
        printf("the %d is NOT a Prime number\n",number);

    return 0;
}