/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 21:33:10 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/15 18:43:41 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> //weg
#include <stdio.h>//weg
#include <stdlib.h>//weg (want Norminette geeft warning)
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++; //ft_strlen
	dup = malloc((sizeof(char))*(len + 1));
	if (dup == NULL)
		return (NULL);
	while (i < len) //memcpy
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
