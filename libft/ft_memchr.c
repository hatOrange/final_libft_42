/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:28:29 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/20 18:25:42 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	char			*ss;

	ss = s;
	ch = c;
	i = 0;
	ss = (char *)ss;
	while (i < n)
	{
		if (*(ss + i) == ch)
			return (ss + i);
		++i;
	}
	return (NULL);
}
