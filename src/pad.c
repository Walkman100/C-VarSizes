/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:03:33 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 13:11:55 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

void	ft_putstr_n(const char *s, unsigned long long total_len)
{
	unsigned long long slen;

	slen = ft_strlen(s);
	ft_putstr(s);
	while (slen < total_len)
	{
		ft_putchar(' ');
		slen++;
	}
}

void	ft_putnbr_n(long long n, long long total_len, int pad_right)
{
	long long nlen;

	nlen = ft_nbrlen(n);
	if (pad_right)
		ft_putnbr(n);
	while (nlen < total_len)
	{
		ft_putchar(' ');
		nlen++;
	}
	if (!pad_right)
		ft_putnbr(n);
}

void	ft_putnbr_nu(unsigned long long n, unsigned long long total_len)
{
	unsigned long long nlen;

	nlen = ft_nbrlen_u(n);
	ft_putnbr_u(n);
	while (nlen < total_len)
	{
		ft_putchar(' ');
		nlen++;
	}
}
