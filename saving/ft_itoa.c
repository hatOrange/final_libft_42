/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:39:31 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/12 17:00:03 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getlength(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*final;
	unsigned int	temp;

	len = ft_getlength(n);
	temp = n;
	final = (char *)malloc((len + 1) * sizeof(char));
	if (!final)
		return (NULL);
	if (n < 0)
	{
		temp = n * -1;
		final[0] = '-';
	}
	if (temp == 0)
		final[0] = '0';
	final[len] = '\0';
	while (temp)
	{
		len--;
		final[len] = (temp % 10) + '0';
		temp /= 10;
	}
	return (final);
}
