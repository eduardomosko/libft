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
