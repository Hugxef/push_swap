/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:34:39 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:34:40 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/srcs/libft.h"

int		ft_printf(const char *s, ...);
char	*ft_strtoupper(char *str);
int		ft_intparser(va_list arglist);
int		ft_charparser(va_list arglist);
int		ft_uintparser(va_list arglist);
int		ft_hexparser(va_list arglist, int mode);
int		ft_ifparser(const char *s, int charCount, va_list arglist);
int		ft_ptrparser(va_list arglist);
char	*ft_itoa_base_x(unsigned long nb, int base, int index);
char	*ft_uitoa_base(unsigned long long n, int base);
char	*ft_strtoupper(char *str);
char	*ft_utioa_loop(char *str, int len, unsigned long long n, int base);

#endif
