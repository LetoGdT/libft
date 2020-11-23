/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:20:01 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 16:20:04 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int ch, size_t max_size)
{
	int i;

	i = 0;
	while (i < max_size && ((char*)src)[i] != (char)ch)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	if (i < max_size && ((char*)src)[i] == (char)ch)
		((char*)dest)[i] = (char)ch;
	return (dest);
}
