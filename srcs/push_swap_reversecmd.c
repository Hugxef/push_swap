/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_reversecmd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:32:32 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 14:32:33 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reversea(t_stack *stacka, int show)
{
	int		i;
	int		tmp;
	int		taille;

	taille = stacka->taille;
	i = 0;
	tmp = stacka->elements[taille - 1];
	while (i < taille - 1)
	{
		stacka->elements[taille - 1 - i] = stacka->elements[taille - 2 - i];
		i++;
	}
	stacka->elements[0] = tmp;
	if (show)
		ft_printf("rra\n");
	return ;
}

void	reverseb(t_stack *stackb, int show)
{
	int		i;
	int		tmp;
	int		taille;

	taille = stackb->taille;
	i = 0;
	tmp = stackb->elements[taille - 1];
	while (i < taille - 1)
	{
		stackb->elements[taille - 1 - i] = stackb->elements[taille - 2 - i];
		i++;
	}
	stackb->elements[0] = tmp;
	if (show)
		ft_printf("rrb\n");
	return ;
}

void	rerverses(t_stack *stacka, t_stack *stackb)
{
	reversea(stacka, 0);
	reverseb(stackb, 0);
	ft_printf("rrr\n");
	return ;
}
