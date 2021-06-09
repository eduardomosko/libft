/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:03:02 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:03:02 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	s += start;
	slen -= start;
	if (slen < len)
		len = slen;
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, s, len);
	ret[len] = 0;
	return (ret);
}
