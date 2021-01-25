/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 19:46:35 by bsomers       #+#    #+#                 */
/*   Updated: 2020/12/02 22:39:41 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

static	int	check_set(char c, char const *set)
{
	int	i;

	i= 0;
	while (set[i] != '\0')
	{
		i++;
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*sdef;
	int		i;
	//int		j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	sdef = malloc(i * (sizeof(unsigned char)));
	if (sdef == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		if ((check_set(s1[i], (char const *)set)) == 1)
			sdef/*[j++]*/ = ft_substr(s1, i, 1);
		i++;
	}
	return (sdef);
}

int	main()
{
	printf("The outcome is: %s\n", ft_strtrim("uwvxyz", "amungvrgn"));
}