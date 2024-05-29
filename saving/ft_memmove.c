/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:06:26 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 18:44:32 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(const void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*srce;
	size_t		i;

	i = 0;
	dest = (char *)dst;
	srce = (const char *)src;
	if (!dest && !srce)
		return (NULL);
	if (dest > srce && dest < srce + len)
	{
		while (len-- > 0)
			*(dest + len) = *(srce + len);
	}
	else
	{
		while (i < len)
		{
			*(dest + i) = *(srce + i);
			++i;
		}
	}
	return (dest);
}
