/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:02:45 by bsomers       #+#    #+#                 */
/*   Updated: 2020/12/05 12:01:09 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
