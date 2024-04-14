/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:20:54 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:15:16 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*srce;

	dest = (char *)dst;
	srce = (char *)src;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(srce + i);
		i ++;
	}
	return (dst);
}
