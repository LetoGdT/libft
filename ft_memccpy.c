/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:20:01 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/30 13:43:31 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t max_size)
{
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	while (max_size-- > 0)
		if ((*d++ = *s++) == (char)ch)
			return (d);
	return (NULL);
}
