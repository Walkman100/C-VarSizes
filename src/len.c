/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:55:35 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 14:07:34 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

MAXNBR	ft_nbrlen(MAXNBR i)
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

MAXUNBR	ft_nbrlen_u(MAXUNBR i)
{
	if (i > 9)
		return (ft_nbrlen_u(i / 10) + 1);
	else
		return (1);
}

MAXUNBR	ft_strlen(const char *s)
{
	MAXUNBR i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
