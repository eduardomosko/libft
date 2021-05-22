/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:03:38 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/22 12:03:38 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*it1;
	const unsigned char	*it2;
	const unsigned char	*end;

	it1 = (unsigned char *) s1;
	it2 = (unsigned char *) s2;
	end = (unsigned char *) s1 + n;
	while (it1 != end && *it1 != '\0' && *it2 != '\0' && *it1 == *it2)
	{
		it1++;
		it2++;
	}
	return (*it1 - *it2);
}
