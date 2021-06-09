/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:03:23 by emendes-          #+#    #+#             */
/*   Updated: 2021/06/08 22:03:23 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
