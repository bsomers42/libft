/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/31 10:34:20 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/31 13:56:28 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	if (new == NULL)
		return ;
	new->next = NULL;
	if (*lst == NULL)  //(In case there is no "1st node" yet)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// int main(void)
// {

// 	t_list *head;
// 	t_list *elem1;
// 	t_list *elem2;
// 	head = NULL;
// 	elem1 = ft_lstnew("aaa");
// 	elem2 = ft_lstnew("bbb");
// 	ft_lstadd_back(&head, elem1);
// 	printf("%s", head->content);
// 	return (0);

// }