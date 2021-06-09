/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:03:24 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:03:24 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	uint8_t		lookup[256];
	size_t		len;

	ft_bzero(lookup, 256);
	while (*set)
		lookup[*(unsigned char *)set++] = 1;
	while (lookup[*(unsigned char *)s1])
		s1++;
	len = ft_strlen(s1);
	while (len && lookup[(unsigned char)s1[len - 1]])
		len--;
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len);
	ret[len] = 0;
	return (ret);
}
