/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:02:20 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:02:20 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target;
	unsigned char	*mem;
	size_t			n;

	n = ft_strlen(s);
	target = c;
	if (target == '\0')
		return ((char *)s + n);
	if (n == 0)
		return (NULL);
	mem = (unsigned char *)s + n - 1;
	while (n--)
		if (*mem-- == target)
			return ((char *)++mem);
	return (NULL);
}
