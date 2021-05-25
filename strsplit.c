/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 22:25:37 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/24 22:25:37 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*next_substring(const char *str, char c)
{
	int	am_in_separator;

	am_in_separator = 0;
	while (*str != '\0')
	{
		if (*str == c)
			am_in_separator = 1;
		else if (am_in_separator)
			return (str);
		++str;
	}
	return (str);
}

static char	*ft_strdup_sep(const char *src, char c)
{
	char	*dest;
	size_t	n;

	n = 0;
	while (src[n] != '\0' && !(src[n] == c))
		++n;
	dest = malloc(n + 1);
	if (dest != NULL)
	{
		dest[n] = '\0';
		while (n--)
			dest[n] = src[n];
	}
	return (dest);
}

static size_t	count_substrings(const char *str, char c)
{
	size_t	n;

	n = 0;
	if (*str == c)
		str = next_substring(str, c);
	while (*str != '\0')
	{
		str = next_substring(str, c);
		++n;
	}
	return (n);
}

char	**ft_split(const char *str, char c)
{
	unsigned int	s;
	unsigned int	i;
	char			**ret;

	i = 0;
	s = count_substrings(str, c);
	ret = malloc((s + 1) * sizeof(*ret));
	if (ret == NULL)
		return (NULL);
	if (*str == c)
		str = next_substring(str, c);
	while (*str != '\0')
	{
		ret[i++] = ft_strdup_sep(str, c);
		str = next_substring(str, c);
	}
	ret[s] = NULL;
	return (ret);
}
