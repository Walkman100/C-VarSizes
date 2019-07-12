/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VarSizes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:00:57 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 13:29:33 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VAR_SIZES_H
# define VAR_SIZES_H
# include <unistd.h>
# include <inttypes.h>
# include <time.h>

void		ft_putchar(const char c);
void		ft_putstr(const char *s);
void		ft_putnbr(long long n);
void		ft_putnbr_u(unsigned long long n);

long long	ft_nbrlen(long long i);
unsigned long long	ft_nbrlen_u(unsigned long long i);
unsigned long long	ft_strlen(const char *s);

void		ft_putstr_n(const char *s, unsigned long long total_len);
void		ft_putnbr_n(long long n, long long total_len);
void		ft_putnbr_nu(unsigned long long n, unsigned long long total_len);

// thanks to https://stackoverflow.com/a/28338942/2999220

# define MAX_OF(type) \
    (((type)(~0LLU) > (type)((1LLU<<((sizeof(type)<<3)-1))-1LLU)) ? (long long unsigned int)(type)(~0LLU) : (long long unsigned int)(type)((1LLU<<((sizeof(type)<<3)-1))-1LLU))
# define MIN_OF(type) \
    (((type)(1LLU<<((sizeof(type)<<3)-1)) < (type)1) ? (long long int)((~0LLU)-((1LLU<<((sizeof(type)<<3)-1))-1LLU)) : 0LL)

#endif
