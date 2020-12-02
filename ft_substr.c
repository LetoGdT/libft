/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:52:52 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/12/02 18:22:32 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (start > ft_strlen(str))
		len = 0;
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (str[start + i] && i < len)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
