/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_else_statement.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacarval <vacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:16:15 by vacarval          #+#    #+#             */
/*   Updated: 2023/08/01 12:42:49 by vacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{   
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You're eligible to vote!");
    }
        else 
    {
        printf("You're under the legal age to vote!");
    }
    return 0;
}
/*
\\Another way to do this, is starting by setting a value for "age" and removing the "scanf"//

    int age = 15;

    if(age >= 18)
    {
        printf("You are eligible to vote");
    }

    else
    {
        printf("Sorry, you're under the legal age to vote!");
    }
    return 0;
*/