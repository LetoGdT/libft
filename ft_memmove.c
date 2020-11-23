/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:20:31 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 16:20:34 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	int			i;
	char		*d;
	const char	*s;

	if (dest < src)
	{
		i = 0;
		while (i < size)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	}
	else
	{
		d = dest + size - 1;
		s = src + size - 1;
		i = size - 1;
		while (i)
		{
			((char*)d)[i] = ((char*)src)[i];
			i--;
		}
	}
	return (dest);
}
