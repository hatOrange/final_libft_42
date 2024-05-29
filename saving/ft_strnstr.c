/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:58:28 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 18:30:37 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *n, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (*n == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == n[0])
		{
			f = 0;
			while (haystack[i + f] == n[f] && (i + f) < len && n[f])
			{
				if (n[f + 1] == '\0')
					return ((char *)&haystack[i]);
				++f;
			}
		}
		++i;
	}
	return (NULL);
}
