/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:03:38 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/22 12:03:38 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	chars_copied;

	chars_copied = 0;
	while (*src != '\0' && chars_copied < size)
	{
		*dest++ = *src++;
		++chars_copied;
	}
	if (chars_copied == size)
		--dest;
	*dest = '\0';
	while (*src != '\0')
	{
		++chars_copied;
		++src;
	}
	return (chars_copied);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_attempt;
	int		should_null_terminate;

	size_attempt = 0;
	while (*dest != '\0' && size_attempt < size)
		++dest && ++size_attempt;
	should_null_terminate = size_attempt < size;
	while (*src != '\0' && size_attempt < size)
	{
		*dest++ = *src++;
		++size_attempt;
	}
	if (size_attempt == size)
		--dest;
	if (should_null_terminate)
		*dest = '\0';
	while (*src != '\0')
		++src && ++size_attempt;
	return (size_attempt);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	unsigned char	*mem;

	target = c;
	mem = (unsigned char *)s;
	while (*mem)
		if (*mem++ == target)
			return ((char *)--mem);
	return (NULL);
}
