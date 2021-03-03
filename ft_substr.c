/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 21:58:16 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/03 18:58:44 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			count;
	size_t			strl;

	count = 0;
	strl = ft_strlen(s);
	if (s[0] == '\0')
		return (NULL);
	if (start >= strl)
		return (ft_strdup("")); //strdup omdat je voor de empty string ook moet mallocen
	if ((start + len) > strl) //voor als het einde van len na strlen(s) valt
		len = strl - start;
	sub = malloc((len + 1) * (sizeof(unsigned char)));
	if (sub == NULL)
		return (NULL);
	while (count < len && s[start] != '\0')
	{
		sub[count] = s[start];
		start++;
		count++;
	}
	sub[count] = '\0';
	return (sub);
}
