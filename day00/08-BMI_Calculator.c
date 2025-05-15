/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmi_calculator.c                                   :+:      :+:    :+:   */
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
** This program asks for weight (kg) and height (m), then calculates BMI:
**   - BMI = weight / (height × height)
** Based on the result, it displays:
**   - Underweight: BMI < 18.5
**   - Normal: 18.5 ≤ BMI < 25
**   - Overweight: 25 ≤ BMI < 30
**   - Obese: BMI ≥ 30
**
** Required Concepts:
**   - float operations
**   - if-else ladder
*/

#include <stdio.h>

int main(void)
{
    float weight, height, bmi;

    // Ask the user for weight and height
    printf("Enter your weight in kilograms (kg): ");
    scanf("%f", &weight);

    printf("Enter your height in meters (m): ");
    scanf("%f", &height);

    // Check for zero or negative input to avoid invalid calculation
    if (weight <= 0 || height <= 0)
    {
        printf("Invalid input. Weight and height must be positive numbers.\n");
        return 1;
    }

    // Calculate BMI
    bmi = weight / (height * height);

    // Display result
    printf("Your BMI is: %.2f\n", bmi);

    // BMI categories
    if (bmi < 18.5)
        printf("You are underweight.\n");
    else if (bmi < 25)
        printf("You have a normal weight.\n");
    else if (bmi < 30)
        printf("You are overweight.\n");
    else
        printf("You are obese.\n");

    return 0;
}
