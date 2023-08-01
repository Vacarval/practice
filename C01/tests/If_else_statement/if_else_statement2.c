/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_else_statement2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <vacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:47:59 by vacarval          #+#    #+#             */
/*   Updated: 2023/08/01 13:15:34 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* If we want to use more then 2 conditions, instead of using only "if" and "else", we
need to use "else if" for all the conditions till the last one that should be only "else"*/
int main()
{
    int age = 50;

    if(age > 120)
    {   
        printf("Invalid age");
    }
    else    if(age < 0)
    {
        printf("Invalid age");
    }
    else    if(age >= 18)
    {
        printf("You're eligible to vote!");
    }
    else
    {
        printf("Sorry, you are not eligible to vote!");
    }

    return 0;
}
