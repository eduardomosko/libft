/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:02:29 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:02:29 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*itbig;
	const char	*itlil;
	size_t		itlen;

	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && len)
	{
		itlen = len;
		itbig = big;
		itlil = little;
		while (*itlil && *itbig && *itlil++ == *itbig++ && itlen--)
			if (*itlil == 0)
				return ((char *) big);
		len--;
		big++;
	}
	return (NULL);
}
