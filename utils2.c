/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:26:10 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/06 21:26:14 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sorted(t_stack *a)
{
	t_node	*cur;

	cur = a->top;
	while (cur && cur->next)
	{
		if (cur->value > cur->next->value)
			return (0);
		cur = cur->next;
	}
	return (1);
}

int	find_min_pos(t_stack *stack)
{
	t_node	*cur;
	int		min;
	int		pos;
	int		i;

	if (!stack || !stack->top)
		return (0);
	cur = stack->top;
	min = cur->value;
	pos = 0;
	i = 0;
	while (cur)
	{
		if (cur->value <= min)
		{
			min = cur->value;
			pos = i;
		}
		cur = cur->next;
		i++;
	}
	return (pos);
}

int	find_max_pos(t_stack *stack)
{
	t_node	*cur;
	int		max;
	int		pos;
	int		i;

	cur = stack->top;
	max = cur->value;
	pos = 0;
	i = 0;
	while (cur)
	{
		if (cur->value > max)
		{
			max = cur->value;
			pos = i;
		}
		cur = cur->next;
		i++;
	}
	return (pos);
}
