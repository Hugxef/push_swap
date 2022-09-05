/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerparser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:35:24 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:35:25 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrparser(va_list arglist)
{
	unsigned long	argptr;
	char			*argchar;
	int				counter;

	counter = 0;
	argptr = (unsigned long)va_arg(arglist, void *);
	if (argptr == 0)
	{
		counter += write(1, "0x0", 3);
		return (counter);
	}
	write(1, "0x", 2);
	counter = 2;
	argchar = ft_itoa_base_x(argptr, 16, 0);
	counter += (int) ft_strlen(argchar);
	write(1, argchar, counter - 2);
	free(argchar);
	return (counter);
}
