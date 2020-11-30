/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:40:04 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/30 14:03:31 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
