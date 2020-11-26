/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:07:09 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/26 12:42:40 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	if (!(ret = ft_strdup(str)))
		return (NULL);
	i = -1;
	while (ret[++i])
		ret[i] = (*f)(i, ret[i]);
	return (ret);
}
