/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition_int_double.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:44:38 by vacarval          #+#    #+#             */
/*   Updated: 2023/07/31 15:49:25 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	double	x = 12.57;

	int y = 8;

	double result = x + y; //vai somar o numero decimal(double) e o inteiro (int)

	printf("%.2lf", result);

	return 0;
}
