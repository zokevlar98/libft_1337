/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 05:48:42 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/13 04:24:57 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*res;

	if (!lst || !f || !del)
		return (NULL);
	ptr = NULL;
	res = NULL;
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		if (res == NULL)
			res = ptr;
		else
			ft_lstadd_back(&res, ptr);
		lst = lst->next;
	}
	return (res);
}
