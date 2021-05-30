/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:37:06 by emendes-          #+#    #+#             */
/*   Updated: 2021/05/23 15:37:06 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many_chars(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count = 1;
	while (nb / 10)
	{
		nb /= 10;
		++count;
	}
	return (count);
}

static void	put_nbr_into_str(int nb, char *s)
{
	unsigned int	div;
	unsigned int	num;

	num = nb;
	if (nb < 0)
	{
		*s++ = '-';
		num = -nb;
	}
	div = 1;
	while (nb / 10)
	{
		nb = nb / 10;
		div *= 10;
	}
	while (div)
	{
		*s++ = '0' + num / div;
		num = num % div;
		div = div / 10;
	}
	*s = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ret;

	len = how_many_chars(n);
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	put_nbr_into_str(n, ret);
	return (ret);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[32];

	put_nbr_into_str(n, buf);
	ft_putstr_fd(buf, fd);
}
