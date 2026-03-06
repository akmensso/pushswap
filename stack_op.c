#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->pos = 0;
	node->target_pos = 0;
	node->cost_a = 0;
	node->cost_b = 0;
	node->next = NULL;
	return (node);
}

void	push_node(t_stack *stack, t_node *node)
{
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

t_node	*pop_node(t_stack *stack)
{
	t_node	*node;

	if (!stack->top)
		return (NULL);
	node = stack->top;
	stack->top = stack->top->next;
	stack->size--;
	node->next = NULL;
	return (node);
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	free(stack);
}
