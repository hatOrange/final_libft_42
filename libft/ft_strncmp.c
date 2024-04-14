/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:53:04 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:32:59 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		if (*(s1 + i) > *(s2 + i))
			return (s1[i] - s2[i]);
		if (*(s1 + i) < *(s2 + i))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
