/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:08:02 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 16:45:52 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (src == NULL)
	{
		*dst = '\0';
		return (0);
	}
	j = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (dstsize - 1 > i && src[i] != '\0')
		{
			*(dst + i) = *(src + i);
			++i;
		}
		dst[i] = '\0';
	}
	return (j);
}
