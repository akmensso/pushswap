#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->top->value;
	mid = a->top->next->value;
	bot = a->top->next->next->value;

	if (top > mid && mid < bot && top < bot)
		sa(a, 1);
	else if (top > mid && mid > bot)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (top > mid && mid < bot && top > bot)
		ra(a, 1);
	else if (top < mid && mid > bot && top < bot)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (top < mid && mid > bot && top > bot)
		rra(a, 1);
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	min_pos;

	while (a->size > 3)
	{
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
		pb(a, b);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
	rotate_min_to_top(a);
}
