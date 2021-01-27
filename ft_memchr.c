/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:19:03 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/24 14:37:43 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *block, int ch, size_t size)
{
	char *b;

	b = (void*)block;
	while ((size_t)((void*)b - block) < size)
		if (*b == ch)
			return (b);
		else
			b++;
	return (NULL);
}
