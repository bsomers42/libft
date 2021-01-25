/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:02:18 by bsomers       #+#    #+#                 */
/*   Updated: 2020/11/04 17:32:59 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	unsigned char ca;

	p = b;
	ca = (unsigned char)c;
	while (len > 0)
	{
		*p = ca;
		p++;
		len--;
	}
	return (b);
}
