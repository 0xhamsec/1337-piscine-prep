/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09_menu_with_goto.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
** A simple menu program using goto
** Options:
** 1. Greet
** 2. Show date
** 3. Exit
*/

int main(void)
{
    int choice;

menu:
    printf("\n=== MENU ===\n");
    printf("1. Greet\n");
    printf("2. Show date\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Hello! Have a wonderful day!\n");
        goto menu;
    }
    else if (choice == 2)
    {
        printf("Showing current date and time:\n");
        system("date"); // Calls system command to show date/time
        goto menu;
    }
    else if (choice == 3)
    {
        printf("Exiting the program. Goodbye!\n");
        return (0);
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
        goto menu;
    }
}
