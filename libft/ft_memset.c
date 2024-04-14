/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:29:08 by nisharma          #+#    #+#             */
/*   Updated: 2024/03/19 15:32:25 by nisharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
/*
#include <stdio.h>
int main()
{
    char str[50] = "Hello, World!";
    int num = 42;

    // Test case 1: Fill str with 'A'
    ft_memset(str, 'A', sizeof(str));

    // Test case 2: Fill the first 4 bytes of num with 0
    ft_memset(&num, 0, sizeof(int));

    // Print the results
    printf("str: %s\n", str);
    printf("num: %d\n", num);

    return 0;
}
*/
