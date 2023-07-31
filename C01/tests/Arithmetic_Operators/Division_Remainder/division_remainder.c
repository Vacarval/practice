/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division_remainder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <vacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:55:10 by vacarval          #+#    #+#             */
/*   Updated: 2023/07/31 16:37:29 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	double	x = 12.00;

	double	result = x / 8.00;

	int resultado;

	resultado = (int)x % 8;
	
	printf("Divisao: %.2lf\nRemanescente:  %d", result, resultado);
	
	return 0;
}
