/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06_reverse_digits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask user to enter a number and print its digits in reverse order using while loop.
*/

#include <stdio.h>

int main() {
    int num, digit;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");

    // Handle the case when number is 0
    if (num == 0) {
        printf("0");
    }

    // Print digits in reverse order
    while (num != 0) { // 123
        digit = num % 10; 
        printf("%d", digit);  
        num = num / 10;       
    }

    printf("\n");

    return 0;
}
