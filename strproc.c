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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (NULL);
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
	UNUSED(s1);
	UNUSED(s2);
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
