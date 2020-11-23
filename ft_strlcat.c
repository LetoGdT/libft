/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:26:53 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/23 17:31:31 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t taille;

	if (size == 0)
		return (0);
	taille = 0;
	while (dest[taille] != '\0')
		taille++;
	i = 0;
	while (src[i] != '\0' && i < size - taille - 1)
	{
		dest[taille + i] = src[i];
		i++;
	}
	dest[taille + i] = '\0';
	return (taille + i);
}
