/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:08:02 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 17:15:29 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (src == (void *)0)
	{
		*dst = '\0';
		return (dst);
	}
	i = 0;
	while (dstsize - 1 > i && src[i] != '\0')
	{
		*(dst + i) = *(src + i);
		++i;
	}
	dst[i] = '\0';
	return (i);
}
