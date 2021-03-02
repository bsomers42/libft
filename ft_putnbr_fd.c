/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 18:55:13 by bsomers       #+#    #+#                 */
/*   Updated: 2021/02/10 12:51:37 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd);
/*{
	write(fd, &c, 1);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	if (n >= 0 && n <= 9 && n != 0)
		ft_putchar_fd(n + '0', fd);
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*
int	main()
{
	int a;
	a = 002314;
	ft_putnbr_fd(a, 1);
	return(0);
}*/