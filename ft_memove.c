/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memove.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/01 21:02:39 by username         #+#    #+#              */
/*   Updated: 2026/11/04 01:49:22 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
