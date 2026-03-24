/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:25:16 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 21:49:10 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_putop(char *op)
{
	while (*op)
		write(1, op++, 1);
	write(1, "\n", 1);
}

void	ra(t_stack *a, int print)
{
	t_node	*cur;
	t_node	*first;

	if (a->size < 2)
		return ;
	first = a->top;
	a->top = a->top->next;
	first->next = NULL;
	cur = a->top;
	while (cur->next)
		cur = cur->next;
	cur->next = first;
	if (print)
		ft_putop("ra");
}

void	rb(t_stack *b, int print)
{
	t_node	*cur;

	if (b->size < 2)
		return ;
	cur = b->top;
	while (cur->next && cur->next->next)
		cur = cur->next;
	cur->next = b->top;
	b->top = b->top->next;
	cur->next->next = NULL;
	if (print)
		ft_putop("rb");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	ft_putop("rr");
}

void	rra(t_stack *a, int print)
{
	t_node	*cur;
	t_node	*last;

	if (a->size < 2)
		return ;
	cur = a->top;
	while (cur->next && cur->next->next)
		cur = cur->next;
	last = cur->next;
	cur->next = NULL;
	last->next = a->top;
	a->top = last;
	if (print)
		ft_putop("rra");
}
