/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_vowel_or_consonant.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Level: Easy to Medium
**
** Description:
** This program asks the user to input a single character, then determines if:
**   - It is a vowel (a, e, i, o, u)
**   - It is a consonant (any other alphabet letter)
**   - It is not a letter at all (symbols, numbers, etc.)
**
** Required Concepts:
**   - char type
**   - if-else statements
**   - ASCII value ranges
**   - Logical operators (&&, ||)
*/

#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if it is a letter
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        // Convert to lowercase for easier comparison
        char lower = (character >= 'A' && character <= 'Z') ? character + 32 : character;

        // Check if it's a vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            printf("It is a vowel.\n");
        }
        else
        {
            printf("It is a consonant.\n");
        }
    }
    else
    {
        printf("It is not a letter.\n");
    }

    return 0;
}
