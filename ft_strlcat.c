/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:00:53 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:24 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_attempt;
	int		should_null_terminate;

	size_attempt = 0;
	while (*dest != '\0' && size_attempt < size)
	{
		++dest;
		++size_attempt;
	}
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
	{
		++src;
		++size_attempt;
	}
	return (size_attempt);
}
