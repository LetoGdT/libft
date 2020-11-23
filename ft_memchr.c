/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:19:03 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 16:19:07 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *block, int ch, size_t size)
{
	char *b;

	b = (void*)block;
	while ((void*)b - block < size)
		if (*b == ch)
			return (b);
		else
			b++;
	return (NULL);
}
