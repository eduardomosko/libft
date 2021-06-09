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

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[32];

	put_nbr_into_str(n, buf);
	ft_putstr_fd(buf, fd);
}
