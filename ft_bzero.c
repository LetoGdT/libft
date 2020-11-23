/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:17:49 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 16:17:55 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *pointer, size_t count)
{
	int i;

	i = 0;
	if (count <= 0)
	{
		return (pointer);
	}
	while (i < count)
	{
		((char*)pointer)[i] = 0;
		i++;
	}
	return (pointer);
}
