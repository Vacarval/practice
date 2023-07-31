/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:31:16 by vacarval          #+#    #+#             */
/*   Updated: 2023/07/31 12:25:37 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main()
{
/*	double number = 10.05;
	float number1 = 10.9;
	double number2 = 5.5e6;

	printf("%.2lf\n", number);
	printf("%.1f\n", number1);
	printf("%.2lf", number2);

	return 0;
*/

    double base = 5.5;
    int exponent = 6;
    double result = pow(base, exponent);

    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}
