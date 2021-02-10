/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/29 11:52:06 by bsomers       #+#    #+#                 */
/*   Updated: 2021/01/29 11:57:15 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_itoa(int n)
{
	int i;
	char *str;
	int len;

	str = malloc(sizeof(char) * len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	
	

}

int	main()
{
	printf("%s", ft_itoa(12));
}