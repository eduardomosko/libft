/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:04:44 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/22 18:04:44 by emendes-         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n - 1)
	{
		++s1;
		++s2;
		++i;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
		++nptr;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		n *= 10;
		n += sign * (*nptr - '0');
		++nptr;
	}
	return (n);
}
