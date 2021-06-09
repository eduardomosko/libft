/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:26:12 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:23 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*itnext;
	t_list	*it;

	if (!lst)
		return ;
	it = *lst;
	while (it)
	{
		if (del)
			del(it->content);
		itnext = it->next;
		free(it);
		it = itnext;
	}
	*lst = NULL;
}
