/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 17:17:44 by bsomers       #+#    #+#                 */
/*   Updated: 2021/01/29 11:21:43 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[k] != '\0' /*&& i <= size*/)
	{
		k++;
	}
	if (dst[k] == '\0')
	{
		while (src[j] != '\0' && i <= size)
		{
			dst[k+i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (k+i);
}
/*
int	main()
{
	char dst[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char src[] = "there is no stars in the sky";
	printf("System outcome: %lu, \n", strlcat(dst, src, 10));
	printf("My outcome: %zu, \n", ft_strlcat(dst, src, 10));
} */