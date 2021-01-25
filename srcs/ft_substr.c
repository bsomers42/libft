/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 21:58:16 by bsomers       #+#    #+#                 */
/*   Updated: 2020/12/02 12:32:14 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			count;

	i = 0;
	count = 0;
	while (i != start)
	{
		i++;
		if (s[i] == '\0')
			return (0);
	}
	while (s[i] != '\0')
		i++;
	sub = malloc(count * (sizeof(unsigned char)));
	while (i != start)
		i--;
	while (count < len && s[i] != '\0')
	{
		sub[count] = s[i];
		i++;
		count++;
	}
	return (sub);
}
