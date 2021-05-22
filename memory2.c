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
	size_t				i;

	i = 0;
	if (n == 0)
		return (0);
	it1 = s1;
	it2 = s2;
	while (*it1 == *it2 && i < n - 1)
	{
		++it1;
		++it2;
		++i;
	}
	return (((unsigned char)*it1) - ((unsigned char)*it2));
}
