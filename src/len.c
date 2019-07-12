/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:55:35 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 13:00:07 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

long long	ft_nbrlen(long long i)
{
	if (i < 0)
	{
		if (-i < 0)
			return (ft_nbrlen_u(-(i / 10)) + 2);
		else
			return (ft_nbrlen(-i) + 1);
	}
	else
		return (ft_nbrlen_u(i));
}

unsigned long long	ft_nbrlen_u(unsigned long long i)
{
	if (i > 9)
		return (ft_nbrlen_u(i / 10) + 1);
	else
		return (1);
}

unsigned long long	ft_strlen(const char *s)
{
	unsigned long long i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
