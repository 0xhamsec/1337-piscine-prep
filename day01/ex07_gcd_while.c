/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07_gcd_while.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xHamSec <0xHamSec@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15  by 0xHamSec                 #+#    #+#             */
/*   Updated: 2025/05/15  by 0xHamSec                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ask for two integers. Find their GCD using Euclidean algorithm in a while loop.
*/

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d%d", &n1, &n2);

    // التعامل مع القيم السالبة بتحويلها إلى موجبة
    if (n1 < 0) n1 = -n1; // 
    if (n2 < 0) n2 = -n2;

    // طباعة الأعداد الأصلية بعد المعالجة
    printf("Calculating GCD of %d and %d...\n", n1, n2);

    // التأكد أن n1 ≥ n2
    if (n2 > n1) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    // Euclidean algorithm
    while (n2 != 0)
    {
        int temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    printf("The GCD = %d\n", n1);

    return 0;
}
