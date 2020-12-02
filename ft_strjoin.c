/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:37:39 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/12/02 18:36:54 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	const char	*p;
	const char	*s;
	char		*ret;
	size_t		i;

	if (!prefix || !suffix)
		return (NULL);
	if (!(ret = malloc(sizeof(char) *
		(ft_strlen(prefix) + ft_strlen(suffix) + 1))))
		return (NULL);
	p = prefix;
	s = suffix;
	i = 0;
	while (*p)
		ret[i++] = *p++;
	while (*s)
		ret[i++] = *s++;
	ret[i] = '\0';
	return (ret);
}
