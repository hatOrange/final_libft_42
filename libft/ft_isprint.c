/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:28:24 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 18:26:08 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int ch)
{
	int	isit;

	isit = 0;
	if (ch >= 32 && ch <= 126)
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

	cha = '0';
	checker = 0;
	if (isprint(cha))
	{
		write(1,&cha,1);
	}
	return (0);
}
*/
