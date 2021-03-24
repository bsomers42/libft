/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 17:08:52 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/24 12:10:27 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// static int	check_s(char s, char c)
// {
// 	if (s == c)
// 			return (1);
// 	return (0);
// }

char **ft_split(char const *s, char c)
{
	int	i;
	int	split;
	int l_s2;
	char	**s1;
	//char	*s2;

	i = 0;
	split = 0;
    while (s[split] != '\0' && s[split] != c)
		{split++;}
	if (split == 0)  //wat als c al op 0e locatie zit?
		return((char **)s);
	s1 = malloc(sizeof(char) * (split + 1));
	l_s2 = /* ft_*/strlen(s) - split;
	s2 = malloc(sizeof(char) * (l_s2 + 1));
	i = 0;
	while (i <= split)
	{
		s1[i] = s[i];
		i++;
	}
	i = 0;
	while (i <= l_s2)
	{
		s2[i] = s[split];
		i++;
		split++;
	}
	//s2[i] = '\0';
    return((char**)s1 /**s2*/);
}


// int		main(void)
// {
// 	int i = 0;
// 	char c = 'b';
// 	char **s;
		
// 	s = ft_split("Hallo ik ben hier", c);
// 	while (i < 2)
// 	{
// 		printf("string %d : %s\n", i, s[i]);
// 		i++;
// 	}
// 	return (0);
// }


int main()
{
	char **res;
	res = ft_split("aaabchaaa", 'c');
	while (res)
	{
		printf("%s\n", *res);
		res += sizeof(char *);
	}
}
