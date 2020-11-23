/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:20:10 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 16:20:13 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	int i;

	i = 0;
	while (i < count)
	{
		((char*)pointer)[i] = (char)value;
		i++;
	}
	return (pointer);
}
