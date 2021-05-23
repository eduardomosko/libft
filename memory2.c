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

#include <stdint.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	*end;
	unsigned char	target;

	if (n == 0)
		return (NULL);
	mem = (unsigned char *) s;
	end = mem + n - 1;
	target = c;
	while (mem != end)
		if (*mem++ == target)
			return (--mem);
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (SIZE_MAX / nmemb < size)
		return (NULL);
	size *= nmemb;
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
