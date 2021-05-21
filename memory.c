/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:04:22 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/17 21:04:22 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

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

void	*ft_memcpy(char *dest, const char *src, size_t n)
{
	const char	*it;

	it = src + n;
	dest += n;
	while (it-- != src)
		*--dest = *it;
	return (dest);
}

void	*ft_memccpy(char *dest, const char *src, int c, size_t n)
{
	const char	*end;

	end = src + n;
	while (src != end)
	{
		*dest = *src++;
		if (*dest++ == c)
			return (dest);
	}
	return (NULL);
}

/*
 *  DESCRIPTION
 *
 *  The  memmove() function copies n bytes from memory area src to
 *  memory area dest. The memory areas may overlap: copying takes place as
 *  though the bytes in src are first copied into a temporary array that does
 *  not overlap src or dest, and the bytes are then copied from the temporary
 *  array to dest.
 *  
 *  RETURN VALUE
 *
 *  The memmove() function returns a pointer to dest.
 */

void	*ft_memmove(char *dest, const char *src, size_t n)
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
		*itdest = *src;
		src += dir;
		itdest += dir;
	}
	return (dest);
}
