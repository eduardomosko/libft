/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:55:36 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:23 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*it;
	char		*itdest;

	if (!dest && !src)
		return (dest);
	it = src + n;
	itdest = dest + n;
	while (it-- != src)
		*--itdest = *it;
	return (dest);
}
