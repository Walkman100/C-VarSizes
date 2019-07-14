/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:13:26 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/14 15:10:28 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

void	put_clr(char *c)
{
	if (isatty (1))
		ft_putstr(c);
}

void	output_info(char *v, long long s, MAXNBR min, MAXUNBR max)
{
	long long len;

	put_clr(BCYAN);
	ft_putstr_n(v, 23);
	len = ft_nbrlen(s) + 6;
	put_clr(BBLUE);
	ft_putnbr(s);
	ft_putstr(" bytes");
	put_clr(BGREEN);
	while (len < 9)
	{
		ft_putchar(' ');
		len++;
	}
	ft_putnbr_n(min, 40);
	ft_putstr(" ");
	put_clr(BRED);
	ft_putnbr_u(max);
	put_clr(RESET);
	ft_putstr("\n");
}

# define OUTPUT(var) output_info(#var, sizeof(var), MIN_OF(var), MAX_OF(var))

int		main(void)
{
	put_clr(RESET BWHITE);
	ft_putstr_n("Var Type:", 23);
	ft_putstr_n("Size:", 9);
	ft_putstr_n("Min:", 41);
	ft_putstr("Max:");
	put_clr(RESET);
	ft_putchar('\n');

	OUTPUT(int8_t);
	OUTPUT(char);
	OUTPUT(signed char);
	OUTPUT(int16_t);
	OUTPUT(short);
	OUTPUT(signed short);
	OUTPUT(int32_t);
	OUTPUT(int);
	OUTPUT(signed int);
	OUTPUT(pid_t);
#ifdef linux
	OUTPUT(__gwchar_t);
#endif
	OUTPUT(wchar_t);
	OUTPUT(int64_t);
	OUTPUT(long);
	OUTPUT(signed long);
	OUTPUT(long long);
	OUTPUT(signed long long);
	OUTPUT(ssize_t);
	OUTPUT(time_t);
	OUTPUT(intptr_t);
	OUTPUT(intmax_t);
	OUTPUT(long int);
	OUTPUT(long long int);
	OUTPUT(off_t);
#ifdef __SIZEOF_INT128__
	OUTPUT(__int128);
#endif

	ft_putstr("\nDecimal (can't get min):\n");
	OUTPUT(float);
	OUTPUT(double);
#ifdef __SIZEOF_INT128__
	OUTPUT(long double);
#else
	output_info("long double", sizeof(long double), 0, MAX_OF(double));
#endif
	ft_putchar('\n');

	ft_putstr("Unsigned:\n");
	OUTPUT(uint8_t);
	OUTPUT(unsigned char);
	OUTPUT(uint16_t);
	OUTPUT(unsigned short);
	OUTPUT(uint32_t);
	OUTPUT(unsigned int);
	OUTPUT(uint64_t);
	OUTPUT(unsigned long);
	OUTPUT(unsigned long long);
	OUTPUT(unsigned long long int);
	OUTPUT(size_t);
	OUTPUT(clock_t);
	OUTPUT(uintmax_t);
	OUTPUT(void *);
	OUTPUT(long *);
#ifdef __SIZEOF_INT128__
	OUTPUT(unsigned __int128);
#endif

	return (0);
}
