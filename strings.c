/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:25:14 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/10 17:43:47 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void putcharr(char c)
{
	write(1, &c, 1);
}
void putstr(char str[])
{
	int i;

	i = 0;
	while (*str)
		write(1, str++, 1);
}

int strcomp(char str1[], char str2[])
{
	int i = 0;

	while (str1[i] && str1[i] == str2[i])
		i++;
	return str1[i] - str2[i];
}

int strlenn(char str[])
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *strconcat(char str1[], char str2[])
{
	int i = 0;
	int len = strlenn(str1);
	while (str2[i])
	{
		str1[len+i] = str2[i];
		i++;
	}
	return str1;
}
