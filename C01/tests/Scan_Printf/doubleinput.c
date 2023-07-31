/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubleinput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:02:30 by vacarval          #+#    #+#             */
/*   Updated: 2023/07/31 14:24:48 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	double number;
	char alphabet;

	printf("Enter double input: ");
	scanf("%lf", &number);

	printf("Enter character input: ");
	scanf("\n%c", &alphabet);

	printf("Number : %.2lf\n", number);
	printf("Character : %c", alphabet);

	return 0;
}

/* For multiple user inputs

{
	double number;
	char alphabet;

	printf("Enter input values: ");
	scanf("%lf %c", &number, &alphabet);
	
	printf("Number : %.2lf\n", number);
	printf("Character : %c", alphabet);
 
	 return 0;
}
*/
