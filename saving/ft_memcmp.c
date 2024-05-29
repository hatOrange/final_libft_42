/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:43:03 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 14:06:07 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ss1, const void *ss2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)ss1)[i] != ((unsigned char *)ss2)[i])
			return (((unsigned char *)ss1)[i] - ((unsigned char *)ss2)[i]);
		++i;
	}
	return (0);
}
