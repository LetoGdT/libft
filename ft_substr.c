/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:52:52 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/25 15:36:37 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	if (len > ft_strlen(str))
		len = 0;
	if (ft_strlen(str) == 0
		|| (res = malloc((sizeof(char) * (len + 1)))) == NULL)
		return (NULL);
	i = -1;
	while (*str && ++i < len)
		res[i] = str[start + i];
	res[i] = '\0';
	return (res);
}
