/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 14:31:53 by bsomers       #+#    #+#                 */
/*   Updated: 2020/12/05 12:07:17 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != ('\0'))
	{
		i++;
	}
	while (s[i] != (s[0] - 1) && i > -1)
	{
		if (s[i] == c)
			return (&((char*)s)[i]);
		i--;
	}
	return (0);
}
