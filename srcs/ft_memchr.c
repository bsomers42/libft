/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 11:31:06 by bsomers       #+#    #+#                 */
/*   Updated: 2020/12/06 13:36:01 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		c1;
	const unsigned char	*s1;

	c1 = (unsigned char)c;
	s1 = s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return ((void *)s1 + i);
		i++;
	}
	return (NULL);
}
