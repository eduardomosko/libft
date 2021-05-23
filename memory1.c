/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:04:22 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/17 21:04:22 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*it;

	it = s + n;
	while (it-- != s)
		*it = c;
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*it;
	char		*itdest;

	it = src + n;
	itdest = dest + n;
	while (it-- != src)
		*--itdest = *it;
	return (dest);
}

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	target;
	const char		*end;
	const char		*it;
	char			*itdest;

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*itdest;
	const char	*end;
	int			dir;

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
