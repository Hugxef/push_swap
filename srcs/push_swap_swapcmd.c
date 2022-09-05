/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swapcmd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:33:23 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:33:24 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapa(t_stack *stacka, int show)
{
	int	tmp;

	if (stacka->taille > 1)
	{
		tmp = stacka->elements[0];
		stacka->elements[0] = stacka->elements[1];
		stacka->elements[1] = tmp;
	}
	if (show)
		ft_printf("sa\n");
	return ;
}

void	swapb(t_stack *stackb, int show)
{
	int	tmp;

	if (stackb->taille > 1)
	{
		tmp = stackb->elements[0];
		stackb->elements[0] = stackb->elements[1];
		stackb->elements[1] = tmp;
	}
	if (show)
		ft_printf("sb\n");
	return ;
}

void	swaps(t_stack *stacka, t_stack *stackb)
{
	swapa(stacka, 0);
	swapb(stackb, 0);
	ft_printf("ss\n");
	return ;
}
