/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:24:12 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 21:52:03 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_positions(t_stack *stack)
{
	t_node	*cur;
	int		i;

	cur = stack->top;
	i = 0;
	while (cur)
	{
		cur->pos = i++;
		cur = cur->next;
	}
}

static int	find_target_in_b(t_node *cur_a, t_stack *b)
{
	t_node	*cur_b;
	int		best_val;
	int		best_pos;

	if (!b->top)
		return (0);
	best_val = -1;
	best_pos = find_max_pos(b);
	cur_b = b->top;
	while (cur_b)
	{
		if (cur_b->value < cur_a->value)
		{
			if (best_val == -1 || cur_b->value > best_val)
			{
				best_val = cur_b->value;
				best_pos = cur_b->pos;
			}
		}
		cur_b = cur_b->next;
	}
	return (best_pos);
}

void	set_targets_a_to_b(t_stack *a, t_stack *b)
{
	t_node	*cur_a;

	set_positions(b);
	cur_a = a->top;
	while (cur_a)
	{
		cur_a->target_pos = find_target_in_b(cur_a, b);
		cur_a = cur_a->next;
	}
}

static int	find_best_pos(t_stack *a, int val)
{
	t_node	*cur;
	int		best_val;
	int		best_pos;

	best_val = -1;
	best_pos = (find_max_pos(a) + 1) % a->size;
	cur = a->top;
	while (cur)
	{
		if (cur->value > val)
		{
			if (best_val == -1 || cur->value < best_val)
			{
				best_val = cur->value;
				best_pos = cur->pos;
			}
		}
		cur = cur->next;
	}
	return (best_pos);
}

void	set_targets_b_to_a(t_stack *a, t_stack *b)
{
	t_node	*cur_b;

	set_positions(a);
	cur_b = b->top;
	while (cur_b)
	{
		cur_b->target_pos = find_best_pos(a, cur_b->value);
		cur_b = cur_b->next;
	}
}
