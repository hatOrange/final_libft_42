/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:29:15 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 14:49:11 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *ch)
{
	int	count;

	count = 0;
	while (*ch)
	{
		count++;
		ch++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	char* cha = "0dfgdfsj";
	
	printf("%d", strlen(cha));
	return (0);
}
*/
