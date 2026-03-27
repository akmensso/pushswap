/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:27:29 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 18:27:32 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_insert_pos(t_stack *a, int val)
{
	t_node	*cur;
	t_node	*best;
	int		i;
	int		best_pos;

	cur = a->top;
	best = NULL;
	best_pos = 0;
	i = 0;
	while (cur)
	{
		if (cur->value > val)
		{
			if (best == NULL || cur->value < best->value)
			{
				best = cur;
				best_pos = i;
			}
		}
		cur = cur->next;
		i++;
	}
	if (best == NULL)
		best_pos = (find_max_pos(a) + 1) % a->size;
	return (best_pos);
}

void	push_all_to_a(t_stack *a, t_stack *b)
{
	int	pos;
	int	size;

	while (b->size > 0)
	{
		set_positions(a);
		pos = find_insert_pos(a, b->top->value);
		size = a->size;
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				ra(a, 1);
		}
		else
		{
			pos = size - pos;
			while (pos-- > 0)
				rra(a, 1);
		}
		pa(a, b);
	}
}

void	turk_sort(t_stack *a, t_stack *b)
{
	push_all_to_b(a, b);
	sort_three(a);
	push_all_to_a(a, b);
	rotate_min_to_top(a);
}
