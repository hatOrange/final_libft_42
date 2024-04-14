/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:29:00 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 15:09:36 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int ch)
{
	int	isit;

	isit = 0;
	if (ch >= 48 && ch <= 57)
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
	if (isdigit(cha))
	{
		write(1,&cha,1);
	}
	return (0);
}
*/
