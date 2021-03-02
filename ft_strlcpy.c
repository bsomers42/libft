/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 14:53:35 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/15 22:30:12 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long int	i;

	i = 0;
	if (size < /*ft_*/strlen(src))
		return (/*ft_*/strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i == size || src[i] == '\0')
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	printf("Result is: %ld", ft_strlcpy("AAAA", "BBBBBBBB", 2));
}*/