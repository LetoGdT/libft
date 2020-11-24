/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:46:48 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/24 10:54:32 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *str)
{
	char	*res;
	size_t	size;
	size_t	i;

	size = 0;
	while (str[size])
		size++;
	if ((res = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
