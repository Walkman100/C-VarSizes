/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:46:27 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 14:06:47 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *s)
{
	MAXUNBR i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(MAXNBR n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (-n < 0)
		{
			ft_putnbr(-(n / 10));
			ft_putnbr(-(n % 10));
		}
		else
			ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar (n + '0');
}

void	ft_putnbr_u(MAXUNBR n)
{
	if (n > 9)
	{
		ft_putnbr_u(n / 10);
		ft_putnbr_u(n % 10);
	}
	else
		ft_putchar(n + '0');
}
