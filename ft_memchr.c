/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/30 20:53:43 by username         #+#    #+#              */
/*   Updated: 2026/10/30 21:16:41 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*f;
	size_t			i;

	f = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (f[i] == (unsigned char) c)
			return (&f[i]);
		i++;
	}
	return (NULL);
}
