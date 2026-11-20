/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/30 21:37:16 by username         #+#    #+#              */
/*   Updated: 2026/10/30 21:56:15 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f1;
	unsigned char	*f2;
	size_t			i;

	f1 = (unsigned char *) s1;
	f2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (f1[i] != f2[i])
		{
			return (f1[i] - f2[i]);
		}
		i++;
	}
	return (0);
}
