/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature_converter.c                            :+:      :+:    :+:   */
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
** This program asks the user to choose a conversion type:
**   - Celsius to Fahrenheit (C → F)
**   - Fahrenheit to Celsius (F → C)
** Then converts the temperature using:
**   - F = C × 9/5 + 32
**   - C = (F - 32) × 5/9
**
** Required Concepts:
**   - char input and selection
**   - if-else conditions
**   - floating-point math
*/

#include <stdio.h>

int main(void)
{
    char choice;
    float temperature, converted;

    // Ask user for conversion type
    printf("Choose conversion type:\n");
    printf("C -> F (Enter 'C')\n");
    printf("F -> C (Enter 'F')\n");
    printf("Your choice: ");
    scanf(" %c", &choice);  // Space before %c ignores any leftover newline

    // Convert temperature based on user's choice
    if (choice == 'C' || choice == 'c')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted = temperature * 9.0 / 5.0 + 32.0;
        printf("Temperature in Fahrenheit: %.2f F\n", converted);
    }
    else if (choice == 'F' || choice == 'f')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted = (temperature - 32.0) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f C\n", converted);
    }
    else
    {
        printf("Invalid choice. Please enter 'C' or 'F'.\n");
        return 1;
    }

    return 0;
}

