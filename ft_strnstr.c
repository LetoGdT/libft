/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:19 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/24 15:25:07 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (char*)(haystack + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
