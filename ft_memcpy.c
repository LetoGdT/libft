/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:18:52 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/24 19:32:23 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	while (i < size)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
