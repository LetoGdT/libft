/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:19 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/24 10:27:59 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			return (char*)(haystack + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
