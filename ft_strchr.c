/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:02:45 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/15 19:09:11 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&((char*)s)[i]);//casten?
		i++;
	}
	if (c == '\0')
		return (&((char*)s)[i]); //&s[i]);//casten? Adres was tip v Vincent
	return (NULL);
}
