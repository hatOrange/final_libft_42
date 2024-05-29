/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:32:30 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/14 13:27:15 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arraysize(char const *s, char c)
{
	size_t	index;
	size_t	count;

	count = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c)
		{
			count++;
			while (s[index] && s[index] != c)
				index++;
		}
		while (s[index] == c && s[index])
			index++;
	}
	return (count);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	index;

	index = 0;
	if (!s || n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	while (index < n && s[index])
	{
		str[index] = s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

char	**ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	len;
	size_t	k;
	size_t	save;

	len = 0;
	k = 0;
	new = (char **)malloc(sizeof(char *) * (ft_arraysize(s, c) + 1));
	if (!new)
		return (NULL);
	while (len < ft_arraysize(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		new[len] = ft_strndup(&s[save], k - save);
		if (new[len++] == NULL)
			return (ft_freeall(new));
	}
	new[len] = NULL;
	return (new);
}
