/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:01:22 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 17:54:13 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substringcreation;
	size_t	index;
	size_t	size;

	size = ft_strlen(s);
	index = 0;
	if (s == NULL)
		return (NULL);
	if (len > size - start)
		len = size - start;
	if (start > size)
		len = 0;
	substringcreation = malloc((len + 1) * sizeof(char));
	if (substringcreation == NULL)
		return (NULL);
	while (len > index && s[start + index] && start < size)
	{
		substringcreation[index] = s[start + index];
		++index;
	}
	substringcreation[index] = '\0';
	return (substringcreation);
}
