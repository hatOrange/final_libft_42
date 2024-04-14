/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:06:26 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:23:56 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*dest;
	char	*srce;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	srce = (char *)src;
	while (i < len)
	{
		if (dest > srce && dest < srce + len)
			*(dest + len - i - 1) = *(srce + len - i - 1);
		else
			*(dest + i) = *(srce + i);
		++i;
	}
	return (dst);
}
