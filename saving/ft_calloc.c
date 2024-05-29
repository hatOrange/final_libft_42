/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:00:09 by nisharma          #+#    #+#             */
/*   Updated: 2024/04/11 18:14:59 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointing;

	pointing = (void *)malloc(size * nmemb);
	if (pointing == NULL)
		return (NULL);
	ft_bzero(pointing, nmemb * size);
	return (pointing);
}
