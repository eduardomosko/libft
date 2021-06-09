/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:00:53 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:01:24 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	unsigned char	*mem;

	target = c;
	mem = (unsigned char *) s;
	while (*mem)
		if (*mem++ == target)
			return ((char *)--mem);
	if (target == '\0')
		return ((char *)mem);
	return (NULL);
}
