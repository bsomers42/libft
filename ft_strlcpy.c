/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 14:53:35 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/10 17:22:43 by bsomers       ########   odam.nl         */
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

// int	main()
// {
// 	char s1[] = "Aaaaa";
// 	char s2[] = "Bbbbbbb";
// 	// char s3[] = "Aaaaa";
// 	// char s4[] = "Bbbbbbb";
// 	printf("My result is: %ld -- %s\n", ft_strlcpy(s1, s2, 7), s1/*, strlcpy(s3, s4, 7), s3*/);
// }