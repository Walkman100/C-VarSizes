/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:13:26 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 15:23:37 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VarSizes.h"

void	output_info(char *v, long long s, MAXNBR min, MAXUNBR max)
{
	long long len;

	ft_putstr_n(v, 14);
	len = ft_nbrlen(s);
	ft_putnbr(s);
	ft_putstr(" bytes");
	while (len < 9)
	{
		ft_putchar(' ');
		len ++;
	}
	ft_putnbr_n(min, 29);
	ft_putchar(' ');
	ft_putnbr_nu(max, 30);
	ft_putchar('\n');
}

int		main(void)
{
	ft_putstr_n("Var Type:", 14);
	ft_putstr_n("Size:", 9);
	ft_putstr_n("Min:", 30);
	ft_putstr_n("Max:", 30);
	ft_putchar('\n');

	output_info("int8_t", sizeof(int8_t), MIN_OF(int8_t), MAX_OF(int8_t));
	output_info("char", sizeof(char), MIN_OF(char), MAX_OF(char));
	output_info("schar", sizeof(signed char), MIN_OF(signed char), MAX_OF(signed char));
	output_info("int16_t", sizeof(int16_t), MIN_OF(int16_t), MAX_OF(int16_t));
	output_info("short", sizeof(short), MIN_OF(short), MAX_OF(short));
	output_info("sshort", sizeof(signed short), MIN_OF(signed short), MAX_OF(signed short));
	output_info("int32_t", sizeof(int32_t), MIN_OF(int32_t), MAX_OF(int32_t));
	output_info("int", sizeof(int), MIN_OF(int), MAX_OF(int));
	output_info("sint", sizeof(signed int), MIN_OF(signed int), MAX_OF(signed int));
	output_info("pid_t", sizeof(pid_t), MIN_OF(pid_t), MAX_OF(pid_t));
#ifdef linux
	output_info("__gwchar_t", sizeof(__gwchar_t), MIN_OF(__gwchar_t), MAX_OF(__gwchar_t));
#else
	output_info("wchar_t", sizeof(wchar_t), MIN_OF(wchar_t), MAX_OF(wchar_t));
#endif
	output_info("int64_t", sizeof(int64_t), MIN_OF(int64_t), MAX_OF(int64_t));
	output_info("long", sizeof(long), MIN_OF(long), MAX_OF(long));
	output_info("slong", sizeof(signed long), MIN_OF(signed long), MAX_OF(signed long));
	output_info("long long", sizeof(long long), MIN_OF(long long), MAX_OF(long long));
	output_info("slong long", sizeof(signed long long), MIN_OF(signed long long), MAX_OF(signed long long));
	output_info("ssize_t", sizeof(ssize_t), MIN_OF(ssize_t), MAX_OF(ssize_t));
#ifdef _TIME_T
	output_info("time_t", sizeof(time_t), MIN_OF(time_t), MAX_OF(time_t));
#endif
	output_info("intptr_t", sizeof(intptr_t), MIN_OF(intptr_t), MAX_OF(intptr_t));
	output_info("intmax_t", sizeof(intmax_t), MIN_OF(intmax_t), MAX_OF(intmax_t));
	output_info("long int", sizeof(long int), MIN_OF(long int), MAX_OF(long int));
	output_info("long long int", sizeof(long long int), MIN_OF(long long int), MAX_OF(long long int));
	output_info("off_t", sizeof(off_t), MIN_OF(off_t), MAX_OF(off_t));
#ifdef __SIZEOF_INT128__
	output_info("__int128", sizeof(__int128), MIN_OF(__int128), MAX_OF(__int128));
#endif

	ft_putstr("\nDecimal (can't get min):\n");
	output_info("float", sizeof(float), MIN_OF(float), MAX_OF(float));
	output_info("double", sizeof(double), MIN_OF(double), MAX_OF(double));
	output_info("long double", sizeof(long double), 0, MAX_OF(double));
	ft_putchar('\n'); //MIN_OF(long_double)

	ft_putstr("Unsigned:\n");

	output_info("uint8_t", sizeof(uint8_t), MIN_OF(uint8_t), MAX_OF(uint8_t));
	output_info("uchar", sizeof(unsigned char), MIN_OF(unsigned char), MAX_OF(unsigned char));
	output_info("uint16_t", sizeof(uint16_t), MIN_OF(uint16_t), MAX_OF(uint16_t));
	output_info("ushort", sizeof(unsigned short), 0, MAX_OF(unsigned short));
	output_info("uint32_t", sizeof(uint32_t), MIN_OF(uint32_t), MAX_OF(uint32_t));
	output_info("uint", sizeof(unsigned int), 0, MAX_OF(unsigned int));
	output_info("uint64_t", sizeof(uint64_t), MIN_OF(uint64_t), MAX_OF(uint64_t));
	output_info("ulong", sizeof(unsigned long), 0, MAX_OF(unsigned long));
	output_info("ulong long", sizeof(unsigned long long), MIN_OF(unsigned long long), MAX_OF(unsigned long long));
	output_info("size_t", sizeof(size_t), MIN_OF(size_t), MAX_OF(size_t));
	output_info("clock_t", sizeof(clock_t), MIN_OF(clock_t), MAX_OF(clock_t));
	output_info("uintmax_t", sizeof(uintmax_t), MIN_OF(uintmax_t), MAX_OF(uintmax_t));
	output_info("void *", sizeof(void *), MIN_OF(void *), MAX_OF(void *));
	output_info("char *", sizeof(char *), MIN_OF(char *), MAX_OF(char *));
#ifdef __SIZEOF_INT128__
	output_info("__uint128", sizeof(unsigned __int128), MIN_OF(unsigned __int128), MAX_OF(unsigned __int128));
#endif

	return (0);
}
