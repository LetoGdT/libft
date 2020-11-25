/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:19:17 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/25 12:58:49 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char*)ptr1;
	s = (const unsigned char*)ptr2;
	while (--size)
	{
		d++;
		s++;
		if (*d != *s)
		{
			return (int)(*d - *s);
		}
	}
	return (0);
}
