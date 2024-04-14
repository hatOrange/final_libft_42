/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:35:42 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 17:28:33 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (!(dst + j) && j < dstsize)
		++j;
	while (dstsize > (i + j + 1) && src[i])
	{
		*(dst + i + j) = *(src + i);
		++i;
	}
	dst[i + j] = '\0';
	return (i + j);
}
