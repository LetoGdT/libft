/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:19:17 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 16:19:22 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	char	*d;
	char	*s;

	d = (void*)ptr1;
	s = (void*)ptr2;
	while ((void*)d - ptr1 < size)
		if (*d != *s)
			return (*d - *s);
	return (0);
}
