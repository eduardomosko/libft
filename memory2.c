/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:47:57 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/22 10:47:57 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	*end;
	unsigned char	target;

	mem = (unsigned char *) s;
	end = mem + n - 1;
	target = c;
	while (mem != end)
	{
		if (*mem == target)
			return (mem);
		mem++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*it1;
	const unsigned char	*it2;
	const unsigned char	*end;

	it1 = s1;
	it2 = s2;
	end = s1 + n - 1;
	while (it1 != end && *it1 == *it2)
	{
		it1++;
		it2++;
	}
	return ((*it1 - *it2) * (n != 0));
}
