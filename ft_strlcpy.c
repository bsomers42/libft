/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 14:53:35 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/17 15:21:01 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	if (size == 0)
		return (strlen(src));
	
	while (i < (size - 1) && dst[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	
	if ((i == size -1 || src[i] == '\0') && dst[i] != '\0')
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	if (size < /*ft_*/strlen(src))
		return (/*ft_*/strlen(src));
	if (strlen(src) == 0)
		return (/*ft_*/strlen(src));
	return (i);
}

int	main()
{
	char s1[] = "Aaaa";
	char s2[] = "Bbbb";
	char s3[] = "Aaaa";
	char s4[] = "Bbbb";
	printf("My result is: %ld -- %s\nSystem result: %ld -- %s", ft_strlcpy(s1, s2, 2), s1, strlcpy(s3, s4, 2), s3);
}