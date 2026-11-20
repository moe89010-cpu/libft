/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:10:54 by username         #+#    #+#              */
/*   Updated: 2026/11/20 18:35:42 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	start;
	size_t	j;

	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		start = i;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (i > start)
		{
			result[j] = ft_substr(s, start, i - start);
			if (!result[j])
			{
				while (j > 0)
				{
					free(result[--j]);
				}
				free(result);
				return (NULL);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
