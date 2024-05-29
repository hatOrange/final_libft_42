/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:28:29 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/12 22:37:55 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ss, int ch, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)ss;
	i = 0;
	while (i < n)
	{
		if (*(s + i) == (unsigned char)ch)
			return (s + i);
		++i;
	}
	return (NULL);
}
