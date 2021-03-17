/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 17:08:52 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/17 19:38:15 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char **ft_split(char const *s, char c)
{
    int 
    check_set(s[start], c)
    return(s1, s2)
}

int main()
{
    char s[] = "akhbgkxdhrbg";
    char c = x;
    printf("Outcome: %s, %s", ft_split(s, c));
}