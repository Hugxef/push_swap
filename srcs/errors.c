/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:30:56 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:30:59 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors_free(t_stack *stacka, t_stack *stackb)
{
	freeing(stacka, stackb);
	errors();
}

void	errors(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	freeing(t_stack *stacka, t_stack *stackb)
{
	if (stacka != NULL)
	{
		free(stacka->elements);
		free(stacka->tmp);
		free(stacka);
	}
	if (stackb != NULL)
	{
		free(stackb->elements);
		free(stackb->tmp);
		free(stackb);
	}
}
