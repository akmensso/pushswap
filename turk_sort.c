#include "push_swap.h"

void	push_all_to_b(t_stack *a, t_stack *b)
{
	pb(a, b);
	pb(a, b);
	while (a->size > 3)
	{
		normalize(a);
		normalize(b);
		set_targets_a_to_b(a, b);
		set_costs(a, b);
		do_cheapest_move(a, b);
	}
}
