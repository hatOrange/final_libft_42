/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:00:56 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 18:36:30 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	char	*newstring;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s) + 1;
	newstring = (char *)malloc(size * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		newstring[i] = s[i];
		++i;
	}
	newstring[i] = '\0';
	return (newstring);
}
