/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:09:58 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/30 14:09:59 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*curr;

	if (!lst)
		return (NULL);
	if (!(ret = ft_lstnew((*f)(lst->content))))
		return (NULL);
	lst = lst->next;
	curr = ret;
	while (lst)
	{
		if (!(curr->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (ret);
}
