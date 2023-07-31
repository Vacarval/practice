/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsizeof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:43:29 by vacarval          #+#    #+#             */
/*   Updated: 2023/07/31 12:47:00 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main()
{
	int	age;
	double	number;

	printf("int size = %zu\n", sizeof (age));
	printf("double size = %zu", sizeof (number));

	return 0;
}
