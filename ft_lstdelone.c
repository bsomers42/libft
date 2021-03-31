/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/31 13:10:40 by bsomers       #+#    #+#                 */
/*   Updated: 2021/03/31 13:57:12 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct  s_list
// {
//     void *content;
//     struct s_list *next;
// }   t_list;

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = (t_list*)malloc(sizeof(t_list));
// 	if (new == NULL)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// void del(void *content)
// {
// 	free(content);
// }

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
}

// int main(void)
// {

// 	t_list *head;
// 	t_list *elem1;
// 	t_list *elem2;
// 	head = NULL;
// 	elem1 = ft_lstnew("aaa");
// 	elem2 = ft_lstnew("bbb");
// 	ft_lstdelone(elem1, (void *)del);
// 	printf("%s", elem1->content);
// 	return (0);
// }