/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:29:08 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/12 17:41:38 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *val, int enter, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		*((unsigned char *)val + i) = enter;
		i++;
	}
	return (val);
}
