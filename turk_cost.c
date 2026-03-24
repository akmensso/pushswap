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
	int		best_index;
	int		best_pos;

	best_index = -1;
	best_pos = -1;
	cur_b = b->top;
	while (cur_b)
	{
		if (cur_b->index < cur_a->index && cur_b->index > best_index)
		{
			best_index = cur_b->index;
			best_pos = cur_b->pos;
		}
		cur_b = cur_b->next;
	}
	if (best_pos == -1)
		return (find_max_pos(b));
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

static int	find_target_in_a(t_node *cur_b, t_stack *a)
{
	t_node	*cur_a;
	int		best_index;
	int		best_pos;

	best_index = -1;
	best_pos = -1;
	cur_a = a->top;
	while (cur_a)
	{
		if (cur_a->index > cur_b->index
			&& (best_index == -1 || cur_a->index < best_index))
		{
			best_index = cur_a->index;
			best_pos = cur_a->pos;
		}
		cur_a = cur_a->next;
	}
	if (best_pos == -1)
		return (find_min_pos(a));
	return (best_pos);
}

void	set_targets_b_to_a(t_stack *a, t_stack *b)
{
	t_node	*cur_b;
	t_node	*cur_a;
	int		best_val;
	int		best_pos;

	set_positions(a);
	cur_b = b->top;
	while (cur_b)
	{
		best_val = -1;
		best_pos = find_min_pos(a);
		cur_a = a->top;
		while (cur_a)
		{
			if (cur_a->value > cur_b->value)
			{
				if (best_val == -1 || cur_a->value < best_val)
				{
					best_val = cur_a->value;
					best_pos = cur_a->pos;
				}
			}
			cur_a = cur_a->next;
		}
		cur_b->target_pos = best_pos;
		cur_b = cur_b->next;
	}
}

