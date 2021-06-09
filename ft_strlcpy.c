/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:00:26 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:24 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
