/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:03:33 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 14:08:37 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

void	ft_putstr_n(const char *s, MAXUNBR total_len)
{
	MAXUNBR slen;

	slen = ft_strlen(s);
	ft_putstr(s);
	while (slen < total_len)
	{
		ft_putchar(' ');
		slen++;
	}
}

void	ft_putnbr_n(MAXNBR n, MAXNBR total_len)
{
	MAXNBR nlen;

	nlen = ft_nbrlen(n);
	while (nlen < total_len)
	{
		ft_putchar(' ');
		nlen++;
	}
	ft_putnbr(n);
}

void	ft_putnbr_nu(MAXUNBR n, MAXUNBR total_len)
{
	MAXUNBR nlen;

	nlen = ft_nbrlen_u(n);
	ft_putnbr_u(n);
	while (nlen < total_len)
	{
		ft_putchar(' ');
		nlen++;
	}
}
