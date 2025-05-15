/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_even_numbers_do_while.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Use do while to print even numbers from 1 to 100.
*/

#include <stdio.h>

int main()
{
    int number = 1;
    do
    {
        if (number % 2 == 0)
        {
            printf(" %d ",number);
        }
        number = number + 1;
    } while (number <= 100);
    
}