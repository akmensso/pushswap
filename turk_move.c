#include "push_swap.h"

static int	abs_val(int n)
{
	return (n < 0 ? -n : n);
}

static int	total_cost(t_node *node)
{
	if ((node->cost_a >= 0 && node->cost_b >= 0)
		|| (node->cost_a < 0 && node->cost_b < 0))
	{
		if (abs_val(node->cost_a) > abs_val(node->cost_b))
			return (abs_val(node->cost_a));
		return (abs_val(node->cost_b));
	}
	return (abs_val(node->cost_a) + abs_val(node->cost_b));
}

t_node	*cheapest_node(t_stack *a)
{
	t_node	*cur;
	t_node	*best;
	int		min_cost;

	cur = a->top;
	best = cur;
	min_cost = total_cost(cur);
	while (cur)
	{
		if (total_cost(cur) < min_cost)
		{
			min_cost = total_cost(cur);
			best = cur;
		}
		cur = cur->next;
	}
	return (best);
}

static void	rotate_combined(t_stack *a, t_stack *b, t_node *node)
{
	while (node->cost_a > 0 && node->cost_b > 0)
	{
		rr(a, b);
		node->cost_a--;
		node->cost_b--;
	}
	while (node->cost_a < 0 && node->cost_b < 0)
	{
		rrr(a, b);
		node->cost_a++;
		node->cost_b++;
	}
}

void	rotate_to_top_a(t_stack *a, t_stack *b, t_node *node)
{
	rotate_combined(a, b, node);
	while (node->cost_a > 0)
	{
		ra(a, 1);
		node->cost_a--;
	}
	while (node->cost_a < 0)
	{
		rra(a, 1);
		node->cost_a++;
	}
	while (node->cost_b > 0)
	{
		rb(b, 1);
		node->cost_b--;
	}
	while (node->cost_b < 0)
	{
		rrb(b, 1);
		node->cost_b++;
	}
}
