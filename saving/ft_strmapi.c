/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:40:42 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/12 17:54:34 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	one;
	char			*result;
	int				size;

	size = ft_strlen(s);
	one = 0;
	result = (char *)malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[one])
	{
		result[one] = f(one, s[one]);
		one++;
	}
	result[one] = '\0';
	return (result);
}
