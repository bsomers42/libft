/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:40:50 by bsomers       #+#    #+#                 */
/*   Updated: 2020/12/05 14:03:20 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (i <= len || hay[i] == '\0')
	{
		if (needle[0] == '\0' || needle[0] == (char)NULL)
			return ((char*)hay);
		if (hay[i] == needle[0])
		{
			j = 0;
			while (hay[i + j] == needle[j] && hay[i] != '\0' && ((i + j) < len))
			{
				j++;
			}
			if (j == ft_strlen(needle))
				return (&((char*)hay)[i]);
		}
		if (hay[i] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
