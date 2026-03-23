#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->top->value;
	mid = a->top->next->value;
	bot = a->top->next->next->value;
	if (top > mid && top < bot)
		sa(a, 1);
	else if (top < mid && top > bot)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (top > mid && top > bot && mid < bot)
		ra(a, 1);
	else if (top > mid && top > bot && mid > bot)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (top < mid && top < bot && mid > bot)
		rra(a, 1);
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	min_pos;

	while (b->size < 2)
	{
		min_pos = find_min_pos(a);
		if (min_pos == 0)
			pb(a, b);
		else if (min_pos <= a->size / 2)
			ra(a, 1);
		else
			rra(a, 1);
	}
	sort_three(a);
	if (b->top->value < b->top->next->value)
		sb(b, 1);
	pa(a, b);
	pa(a, b);
}
