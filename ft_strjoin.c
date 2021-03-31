/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 12:47:37 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/31 14:51:30 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sdef;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	sdef = malloc((i + j + 1) * (sizeof(unsigned char)));
	if (sdef == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		sdef[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		sdef[i] = s2[j];
		i++;
		j++;
	}
	sdef[i] = '\0';
	return (sdef);
}
