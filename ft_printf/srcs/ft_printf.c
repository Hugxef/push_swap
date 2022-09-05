/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:34:26 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:34:27 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int				charcount;
	va_list			arglist;
	int				i;

	i = -1;
	charcount = 0;
	va_start(arglist, s);
	while (s[++i])
	{
		if (s[i] == '%')
			charcount = ft_ifparser((s + ++i), charcount, arglist);
		else
			charcount += (int) write(1, &s[i], 1);
	}
	va_end(arglist);
	return (charcount);
}
