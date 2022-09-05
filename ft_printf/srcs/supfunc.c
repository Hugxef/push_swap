/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supfunc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:35:37 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:35:38 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_numlen_base(unsigned long nb, int base)
{
	int	size;

	size = 0;
	if (!nb)
		return (1);
	while (nb)
	{
		nb /= base;
		size++;
	}
	return (size);
}

char	*ft_itoa_base_x(unsigned long nb, int base, int index)
{
	char	*str;
	char	*numbers;
	int		size;

	if (!index)
		numbers = ft_strdup("0123456789abcdef");
	else
		numbers = ft_strdup("0123456789ABCDEF");
	str = NULL;
	size = ft_numlen_base(nb, base);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size--] = '\0';
	while (size >= 0)
	{
		str[size--] = numbers[nb % base];
		nb /= base;
	}
	free(numbers);
	return (str);
}
