/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 21:12:27 by username         #+#    #+#              */
/*   Updated: 2026/11/20 16:20:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*j;

	if (!lst || !del)
		return ;
	i = *lst;
	while (i)
	{
		j = i->next;
		del(i->content);
		free(i);
		i = j;
	}
	*lst = NULL;
}
