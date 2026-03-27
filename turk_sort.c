/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:25:13 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 18:25:20 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_to_b(t_stack *a, t_stack *b)
{
	while (a->size > 3)
	{
		set_positions(a);
		set_positions(b);
		set_targets_a_to_b(a, b);
		set_costs(a, b);
		do_cheapest_move(a, b);
	}
}
