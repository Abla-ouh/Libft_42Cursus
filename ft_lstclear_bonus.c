/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:20:16 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/20 14:53:34 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(tmp);
		tmp = NULL;
	}
}

// void    del_str(void *str)
// {
// 	free(str);
// 	str = NULL;
// }

// int main()
// {
//     t_list  *node1 = ft_lstnew(ft_strdup("test content"));
//     t_list  *node2 = ft_lstnew(ft_strdup("test content2"));
//     t_list  *node3 = ft_lstnew(ft_strdup("test content3"));
//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstclear(&node1, del_str);
//     return (0);    
// }
