/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 18:55:13 by bsomers       #+#    #+#                 */
/*   Updated: 2021/04/07 14:36:43 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Long long is the option that can handle both negative and
// maximum numbers.

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long long	nl;

	nl = n;
	if (nl < 0)
	{
		ft_putchar_fd('-', fd);
		nl = nl * -1;
	}
	if (nl >= 0 && nl <= 9)
		ft_putchar_fd(nl + '0', fd);
	if (nl >= 10)
	{
		ft_putnbr_fd(nl / 10, fd);
		ft_putnbr_fd(nl % 10, fd);
	}
}
