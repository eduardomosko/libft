/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stralloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:31:55 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/23 16:31:55 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ret = malloc(len1 + len2 + 1);
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, s1, len1);
	ft_memcpy(ret + len1, s2, len2);
	ret[len1 + len2] = 0;
	return (ret);
}

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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*ret;
	size_t		len;
	size_t		i;

	len = ft_strlen(s);
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = f(i, s[i]);
		++i;
	}
	ret[i] = 0;
	return (ret);
}
