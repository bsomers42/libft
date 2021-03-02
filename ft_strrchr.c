/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:31:53 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/15 18:47:47 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;//i = ft_strlen!
	while (s[i] != ('\0'))
	{
		i++;
	}
	while (i > -1)
	{
		if (s[i] == c)
			return (&((char*)s)[i]);
		i--;
	}
	return (NULL);
}
