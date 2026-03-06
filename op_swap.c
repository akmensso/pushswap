#include "push_swap.h"

static void	ft_putop(char *op)
{
	while (*op)
		write(1, op++, 1);
	write(1, "\\n", 1);
}

void	sa(t_stack *a, int print)
{
	t_node	*first;
	t_node	*second;

	if (a->size < 2)
		return ;
	first = pop_node(a);
	second = pop_node(a);
	push_node(a, first);
	push_node(a, second);
	if (print)
		ft_putop("sa");
}

void	sb(t_stack *b, int print)
{
	t_node	*first;
	t_node	*second;

	if (b->size < 2)
		return ;
	first = pop_node(b);
	second = pop_node(b);
	push_node(b, first);
	push_node(b, second);
	if (print)
		ft_putop("sb");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	ft_putop("ss");
}
