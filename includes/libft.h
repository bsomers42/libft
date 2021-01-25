/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 16:41:49 by bsomers       #+#    #+#                 */
/*   Updated: 2020/11/25 17:30:16 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

#include <stddef.h>

int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
size_t	ft_strlen(const char *s);
char *ft_strnstr(const char *hay, const char *needle, size_t len);

#endif