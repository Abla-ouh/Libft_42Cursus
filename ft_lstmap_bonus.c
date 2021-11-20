/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:16:20 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/20 14:56:38 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*re_lst;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	re_lst = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&re_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&re_lst, tmp);
		lst = lst->next;
	}
	return (re_lst);
}
