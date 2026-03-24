/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_cost2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:24:28 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 18:24:30 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_costs(t_stack *a, t_stack *b)
{
	t_node	*cur;
	int		cost_a;
	int		cost_b;

	set_positions(a);
	cur = a->top;
	while (cur)
	{
		if (cur->pos <= a->size / 2)
			cost_a = cur->pos;
		else
			cost_a = -(a->size - cur->pos);
		if (cur->target_pos <= b->size / 2)
			cost_b = cur->target_pos;
		else
			cost_b = -(b->size - cur->target_pos);
		cur->cost_a = cost_a;
		cur->cost_b = cost_b;
		cur = cur->next;
	}
}
