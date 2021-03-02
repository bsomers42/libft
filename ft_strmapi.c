/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:40:21 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/10 14:50:03 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //!!
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++; //strlen
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
