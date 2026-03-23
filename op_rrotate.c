#include "push_swap.h"

static void	ft_putop(char *op)
{
	while (*op)
		write(1, op++, 1);
	write(1, "\n", 1);
}

void	rrb(t_stack *b, int print)
{
	t_node	*cur;
	t_node	*last;

	if (b->size < 2)
		return ;
	cur = b->top;
	while (cur->next->next)
		cur = cur->next;
	last = cur->next;
	cur->next = NULL;
	last->next = b->top;
	b->top = last;
	if (print)
		ft_putop("rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_putop("rrr");
}
