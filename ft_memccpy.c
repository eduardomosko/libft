/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:56:53 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:23 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			target;
	const unsigned char		*end;
	const unsigned char		*it;
	unsigned char			*itdest;

	it = src;
	itdest = dest;
	end = src + n;
	target = c;
	while (it != end)
	{
		*itdest = *it++;
		if (*itdest++ == target)
			return (itdest);
	}
	return (NULL);
}
