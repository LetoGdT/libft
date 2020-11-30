/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:07:50 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/30 14:03:30 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
