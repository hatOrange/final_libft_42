/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:28:40 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:06:08 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalnum(int ch)
{
	int	isit;

	isit = 0;
	if ((ch >= 48 && ch <= 57)
		|| (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		isit = 1;
	else
		isit = 0;
	return (isit);
}
/*
int	main(void)
{
	int checker;
	char cha;

	cha = '=';
	checker = 0;
	if (isalnum(cha))
	{
		write(1,&cha,1);
	}
	return (0);
}
*/
