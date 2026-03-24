/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_move2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:24:59 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 18:25:00 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_cheapest_move(t_stack *a, t_stack *b)
{
	t_node	*node;

	node = cheapest_node(a);
	rotate_to_top_a(a, b, node);
	pb(a, b);
}

void	rotate_min_to_top(t_stack *a)
{
	int	min_pos;

	min_pos = find_min_pos(a);
	if (min_pos <= a->size / 2)
	{
		while (min_pos-- > 0)
			ra(a, 1);
	}
	else
	{
		min_pos = a->size - min_pos;
		while (min_pos-- > 0)
			rra(a, 1);
	}
}
