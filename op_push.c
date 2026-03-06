/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:25:01 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/06 21:25:03 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_putop(char *op)
{
	while (*op)
		write(1, op++, 1);
	write(1, "\\n", 1);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*node;

	if (!b->top)
		return ;
	node = pop_node(b);
	push_node(a, node);
	ft_putop("pa");
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*node;

	if (!a->top)
		return ;
	node = pop_node(a);
	push_node(b, node);
	ft_putop("pb");
}
