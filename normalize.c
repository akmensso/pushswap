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
