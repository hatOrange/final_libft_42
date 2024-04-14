/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:10:17 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:23:30 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (NULL);
	while ((s + len) != (void *)0)
		len++;
	if (c == '\0')
		return (s + len);
	while (len >= 0)
	{
		if (*(s + len) == c)
			return (s + len);
		len--;
	}
	return (NULL);
}
