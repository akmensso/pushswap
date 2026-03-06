/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:24:51 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/06 21:24:54 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = init_stack();
	b = init_stack();
	if (!a || !b)
		error_exit(a, b);
	parse_args(argc, argv, a);
	if (stack_sorted(a))
	{
		free_stack(a);
		free_stack(b);
		return (0);
	}
	if (a->size == 2)
		sa(a, 1);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size <= 5)
		sort_five(a, b);
	else
		turk_sort(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
