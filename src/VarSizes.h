/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VarSizes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:00:57 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/12 16:07:18 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARSIZES_H
# define VARSIZES_H
# include <unistd.h>
# include <inttypes.h>
# include <time.h>

# ifdef __SIZEOF_INT128__
#  define MAXNBR __int128
#  define MAXUNBR unsigned __int128
# else
#  define MAXNBR long long
#  define MAXUNBR unsigned long long
# endif

void	ft_putchar(const char c);
void	ft_putstr(const char *s);
void	ft_putnbr(MAXNBR n);
void	ft_putnbr_u(MAXUNBR n);

MAXNBR	ft_nbrlen(MAXNBR i);
MAXUNBR	ft_nbrlen_u(MAXUNBR i);
MAXUNBR	ft_strlen(const char *s);

void	ft_putstr_n(const char *s, MAXUNBR total_len);
void	ft_putnbr_n(MAXNBR n, MAXNBR total_len);
void	ft_putnbr_nu(MAXUNBR n, MAXUNBR total_len);

/*
** thanks to https://stackoverflow.com/a/28338942/2999220
** modified to use MAXNBR and MAXUNBR
*/

# define MAX_OF(type) \
	(((type)((MAXUNBR)~0) > (type)(((MAXUNBR)1<<((sizeof(type)<<3)-1))-1LLU)) ? (MAXUNBR)(type)((MAXUNBR)~0) : (MAXUNBR)(type)(((MAXUNBR)1<<((sizeof(type)<<3)-1))-1LLU))
# define MIN_OF(type) \
    (((type)((MAXUNBR)1<<((sizeof(type)<<3)-1)) < (type)1) ? (MAXNBR)(((MAXUNBR)~0)-(((MAXUNBR)1<<((sizeof(type)<<3)-1))-1LLU)) : 0LL)

# define RESET        "\e[0m"
# define BLACK        "\e[30m"
# define RED          "\e[31m"
# define GREEN        "\e[32m"
# define YELLOW       "\e[33m"
# define BLUE         "\e[34m"
# define MAGENTA      "\e[35m"
# define CYAN         "\e[36m"
# define WHITE        "\e[37m"
# define BBLACK       "\e[1;30m"
# define BRED         "\e[1;31m"
# define BGREEN       "\e[1;32m"
# define BYELLOW      "\e[1;33m"
# define BBLUE        "\e[1;34m"
# define BMAGENTA     "\e[1;35m"
# define BCYAN        "\e[1;36m"
# define BWHITE       "\e[1;37m"

#endif
