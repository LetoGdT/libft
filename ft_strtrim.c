/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:50:32 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/26 12:53:54 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_char_set(char c, const char *char_set)
{
	const char	*set;

	set = char_set - 1;
	while (*++set)
		if (c == *set)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *str, char const *char_set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*ret;

	if (!*str)
	{
		if (!(ret = malloc(sizeof(char))))
			return (NULL);
		*ret = '\0';
		return (ret);
	}
	start = 0;
	while (str[start] && in_char_set(str[start], char_set))
		start++;
	end = ft_strlen(str) - 1;
	while (end > start && in_char_set(str[end], char_set))
		end--;
	if (!(ret = malloc((sizeof(char) * (end - start + 2)))))
		return (NULL);
	i = 0;
	while (start <= end)
		ret[i++] = str[start++];
	ret[i] = '\0';
	return (ret);
}
