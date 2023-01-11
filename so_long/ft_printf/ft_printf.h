/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 03:26:50 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/29 03:26:51 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_SMALL  "0123456789abcdef"
# define HEXA_BIG  "0123456789ABCDEF"
# define DECI "0123456789"

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	write_hex(unsigned long int nbr, char x);
int	write_dec(long long nbr);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char a);
int	ft_format(char a, va_list arg);

#endif
