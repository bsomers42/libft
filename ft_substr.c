/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 21:58:16 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/15 18:48:21 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //weg
#include <stddef.h>//weg
#include <stdlib.h>//weg
#include "libft.h"

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
			return (NULL);
	}
	while (s[i] != '\0')
		i++;
	sub = malloc(count * (sizeof(unsigned char)));  //count = 0!!
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

//CHECKEN! (niet af)