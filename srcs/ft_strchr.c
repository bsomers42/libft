/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:02:45 by bsomers       #+#    #+#                 */
/*   Updated: 2021/01/25 13:14:41 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != ('\0' + 1))
	{
		if (s[i] == c)
			return (&((char*)s)[i]);
		if (s[i] == '\0')
			return (NULL);
		else
			i++;
	}
	return (NULL);
}
