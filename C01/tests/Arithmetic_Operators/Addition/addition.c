/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:34:28 by vacarval          #+#    #+#             */
/*   Updated: 2023/07/31 15:41:36 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main ()
{
	int	x = 12;

	int	result = x + 8; // existe a possibilidade de fazer de outra maneira, apagando esta linha e colocando na linha do "printf" da seguinte maneira.

	printf("%d", result); // printf("%d", x+8);  [a forma mais correta e "elegante" de escrever o codigo e a atual maneira como esta escrito] 

	return 0;
}
