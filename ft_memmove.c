/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:57:22 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:23 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*itdest;
	const char	*end;
	int			dir;

	if (!dest && !src)
		return (dest);
	dir = -1 + 2 * (dest < src);
	end = (src - 1) + (n + 1) * (dir == 1);
	src = (src) + (n - 1) * (dir == -1);
	itdest = (dest) + (n - 1) * (dir == -1);
	while (src != end)
	{
		*itdest = *(const char *)src;
		src += dir;
		itdest += dir;
	}
	return (dest);
}
