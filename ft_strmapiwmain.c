/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapiwmain.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:40:21 by bsomers       #+#    #+#                 */
/*   Updated: 2021/01/29 11:19:49 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	else
		return (c);
}

char	test(unsigned int i, char c)
{
    (void)i;
	return (ft_toupper(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
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

int	main()
{
	printf("%s", ft_strmapi("Hua", test));
}