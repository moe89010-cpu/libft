/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/07 20:20:02 by username         #+#    #+#              */
/*   Updated: 2026/11/20 19:12:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		if (n == 0)
			return (i);
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	s;
	size_t	i;

	s = n;
	i = count_digits(s);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (s == 0)
		str[i] = '0';
	if (s < 0)
	{
		str[0] = '-';
		s *= -1;
	}
	while (s > 0)
	{
		str[i] = ((s % 10) + '0');
		s = s / 10;
		i--;
	}
	return (str);
}
