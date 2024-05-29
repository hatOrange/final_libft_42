/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:04:19 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/14 13:33:38 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*newstring;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	newstring = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (!newstring)
		return (NULL);
	ft_memcpy(newstring, s1, size1);
	ft_memcpy(newstring + size1, s2, size2);
	newstring[size1 + size2] = '\0';
	return (newstring);
}
