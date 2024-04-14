/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:58:28 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:06:57 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *n, size_t len)
{
	size_t	i;
	size_t	found;

	found = 0;
	i = 0;
	if (n == NULL)
		return (haystack);
	while (i < len)
	{
		if (n[found] == haystack[i])
		{
			found = i;
			while (n[i - found] != '\0' && haystack[i] != n[i - found])
				++i;
			if (n[i - found] == '\0')
				return (haystack + found);
		}
		++i;
	}
	return (NULL);
}
