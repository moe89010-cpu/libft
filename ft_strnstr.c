/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/30 22:16:52 by username         #+#    #+#              */
/*   Updated: 2026/11/04 01:49:18 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *) haystack);
	}
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && i + j < len && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *) & haystack[i]);
		i++;
	}
	return (NULL);
}
