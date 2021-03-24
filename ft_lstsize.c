/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 16:06:12 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/24 17:50:09 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

// int main(void)
// {
	
// 	head = NULL;
	
    
// 	printf("%d", ft_lstsize(head));
// 	return (0);
// }