/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 12:47:37 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/03 17:47:40 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sdef;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	sdef = malloc((i + j + 2) * (sizeof(unsigned char)));
	if (sdef == NULL)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		sdef[i] = s1[i];
	--i;
	while (s2[++j] != '\0')
		sdef[++i] = s2[j];
	sdef[i+1] = '\0'; //deze toegevoegd
	return (sdef);
}
