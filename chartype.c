/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chartype1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:26:23 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/22 23:32:16 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
