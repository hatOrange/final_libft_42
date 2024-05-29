/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:35:42 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 17:21:18 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (j < dstsize && dst[j])
		++j;
	while (src[i] && (i + j + 1) < dstsize)
	{
		*(dst + i + j) = *(src + i);
		++i;
	}
	if (j < dstsize)
		dst[i + j] = '\0';
	return (ft_strlen(src) + j);
}
