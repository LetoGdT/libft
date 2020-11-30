/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:50:00 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/11/27 14:35:40 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(char const *str, char c)
{
	size_t		i;
	size_t		count;
	size_t		start;

	i = -1;
	count = 0;
	start = 0;
	while (++i < ft_strlen(str) + 1)
		if (str[start] != c)
		{
			if ((str[i] == c || str[i] == '\0'))
			{
				count++;
				start = i;
			}
		}
		else
			start = i;
	return (count + 1);
}

static char		*strcpy(char const *src, size_t start, size_t end)
{
	char		*ret;
	size_t		i;

	if (!(ret = malloc((sizeof(char) * (end - start + 1)))))
		return (NULL);
	i = -1;
	while (++i < end - start)
		ret[i] = src[start + i];
	ret[i] = '\0';
	return (ret);
}

char			**fail(char **str, int count)
{
	while (count >= 0)
		free(str[count--]);
	free(str);
	return (NULL);
}

char			**ft_split(char const *str, char c)
{
	char		**ret;
	size_t		i;
	size_t		count;
	size_t		start;

	if (!(ret = malloc(sizeof(char*) * count_strings(str, c))))
		return (NULL);
	i = -1;
	count = 0;
	start = 0;
	while (++i < ft_strlen(str) + 1)
		if (str[start] != c)
		{
			if ((str[i] == c || str[i] == '\0'))
			{
				if (!(ret[count++] = strcpy(str, start, i)))
					return (fail(ret, (int)count - 1));
				start = i;
			}
		}
		else
			start = i;
	ret[count] = NULL;
	return (ret);
}
