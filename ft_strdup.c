/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 18:54:58 by username         #+#    #+#              */
/*   Updated: 2026/11/03 19:06:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strdup(const char *s1)
{
	char	*src;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1);
	src = (char *) malloc(size + 1);
	if (src == NULL)
		return (NULL);
	while (s1[i])
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
