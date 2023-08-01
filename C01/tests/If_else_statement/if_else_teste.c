/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_else_teste.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <vacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:33:07 by vacarval          #+#    #+#             */
/*   Updated: 2023/08/01 17:51:26 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main ()
{
double number = -1;

if(number == 0)
{
    printf("The number is 0");
}
else if(number > 0)
{
    printf("The number is positive");
}
else
{
    printf("The number is negative");
}
return 0;
}


