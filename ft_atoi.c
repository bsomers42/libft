/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 14:25:01 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/03 12:35:27 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //!!! 
#include <stdio.h> //!!!

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	min;
	int	num;

	i = 0;
	min = 1;
	num = 0;
	while (nptr[i] == '\n' || nptr[i] == ' ' || nptr[i] == '\t' ||
			nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
	{
		if (nptr[i + 1] == '+' || nptr[i + 1] == '-')
			return (0);
		min = -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * min);
}


// max values (denk aan waarde long)

int main()
{
	char str[] = "9223372036854775810";

	printf("System function: %d\nMy function: %d\n\n\n\n", atoi(str), ft_atoi(str));
}