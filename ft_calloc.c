/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:39:41 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/24 10:54:48 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	int		i;
	char	*ptr;

	if ((ptr = malloc(count * size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		ptr[i++] = 0;
	return (void*)(ptr);
}
