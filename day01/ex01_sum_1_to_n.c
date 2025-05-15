/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_sum_1_to_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask user for N. Calculate sum from 1 to N using while loop.
*/

#include <stdio.h>

int main()
{
    int number;
    int count = 1;
    int sum = 0;

    printf("enter a Number: ");
    scanf("%d",&number);

    while (count <= number)
    {
        sum = sum + count;
        count++;
    }

    printf("the sum = %d ",sum);


}