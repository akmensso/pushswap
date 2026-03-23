#include "push_swap.h"

void	push_all_to_a(t_stack *a, t_stack *b)
{
	int	target;

	while (b->size > 0)
	{
		normalize(a);
		normalize(b);
		set_targets_b_to_a(a, b);
		set_positions(a);
		target = b->top->target_pos;
		if (target <= a->size / 2)
		{
			while (target-- > 0)
				ra(a, 1);
		}
		else
		{
			target = a->size - target;
			while (target-- > 0)
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
