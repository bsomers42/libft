/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:40:50 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/15 18:47:12 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)hay);
	while (i <= len || hay[i] == '\0')
	{
		if (hay[i] == needle[0])
		{
			j = 0;
			while (hay[i + j] == needle[j] && hay[i] != '\0' && ((i + j) < len))
			{
				j++;
			}
			if (j == ft_strlen(needle))//liever niet strlen in while loop, maar matchen met extra variable!
				return (&((char*)hay)[i]);
		}
		i++;
	}
	return (NULL);
}
