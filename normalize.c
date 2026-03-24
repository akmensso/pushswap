/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:59:26 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 18:59:29 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize(t_stack *a)
{
	t_node	*cur;
	t_node	*tmp;
	int		rank;

	cur = a->top;
	while (cur)
	{
		rank = 0;
		tmp = a->top;
		while (tmp)
		{
			if (tmp->value < cur->value)
				rank++;
			tmp = tmp->next;
		}
		cur->index = rank;
		cur = cur->next;
	}
}
