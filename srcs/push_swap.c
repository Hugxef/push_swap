/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:31:22 by hugrene           #+#    #+#             */
/*   Updated: 2022/08/03 15:02:22 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isduplicate(int *elements, int taille)
{
	int	i;
	int	x;
	int	current;

	i = 0;
	while (i < taille)
	{
		x = i + 1;
		current = elements[i];
		while (x < taille)
		{
			if (current == elements[x])
				return (1);
			x++;
		}
		i++;
	}
	return (0);
}

int	ps_verifyargs(char arguments[])
{
	int	test;
	int	i;

	i = 0;
	if (arguments[0] == '-')
		i++;
	while (arguments[i] != '\0')
	{
		test = ft_isdigit(arguments[i]);
		if (test == 0)
			return (test);
		i++;
	}
	test = 1;
	return (test);
}

t_stack	*ps_createstack(char *elements[], int taille)
{
	t_stack	*stack;
	int		i;

	i = 1;
	taille--;
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->taille = taille;
	stack->elements = (int *)malloc(sizeof(int) * taille);
	stack->tmp = (int *)malloc(sizeof(int) * taille);
	while (i <= taille)
	{
		if (ps_verifyargs(elements[i]))
		{
			stack->elements[i - 1] = ft_atoi(elements[i]);
			stack->tmp[i - 1] = ft_atoi(elements[i]);
		}
		else
		{
			errors_free(stack, NULL);
			return (NULL);
		}
		i++;
	}
	return (stack);
}

void	showstacks(t_stack *stacka, t_stack *stackb)
{
	int		i;

	i = 0;
	ft_printf("Stack A : ");
	while (i < stacka->taille)
	{
		ft_printf("| %d ", stacka->elements[i]);
		i++;
	}
	ft_printf("|");
	i = 0;
	ft_printf("\nStack B : ");
	while (i < stackb->taille)
	{
		ft_printf("| %d ", stackb->elements[i]);
		i++;
	}
	ft_printf("|\n\n");
}

int	main(int argc, char *argv[])
{
	int		sorted;
	t_stack	*stacka;
	t_stack	*stackb;

	if (argc < 2)
		errors();
	stacka = ps_createstack(argv, argc);
	stackb = ps_createstack(NULL, 1);
	if (stacka == NULL)
		errors();
	if (isduplicate(stacka->elements, stacka->taille))
		errors_free(stacka, stackb);
	sorted = ps_issorted(stacka);
	if (sorted)
		return (0);
	if (argc == 4)
		thomas(stacka);
	else if (argc == 6)
		hugo(stacka, stackb);
	else
		loic(stacka, stackb);
	freeing(stacka, stackb);
	return (0);
}
