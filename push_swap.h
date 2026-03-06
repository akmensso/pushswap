#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;       // rang normalisé (0 = plus petit)
	int				pos;         // position actuelle
	int				target_pos;  // position cible dans l'autre pile
	int				cost_a;      // nb rotations dans a
	int				cost_b;      // nb rotations dans b
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

t_stack		*init_stack(void);
void		parse_args(int argc, char **argv, t_stack *a);
int			is_valid_int(char *str);
void		free_stack(t_stack *stack);
void		error_exit(t_stack *a, t_stack *b);

void		sa(t_stack *a, int print);
void		sb(t_stack *b, int print);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		ra(t_stack *a, int print);
void		rb(t_stack *b, int print);
void		rr(t_stack *a, t_stack *b);
void		rra(t_stack *a, int print);
void		rrb(t_stack *b, int print);
void		rrr(t_stack *a, t_stack *b);

t_node		*new_node(int value);
void		push_node(t_stack *stack, t_node *node);
t_node		*pop_node(t_stack *stack);
int			stack_sorted(t_stack *a);
int			find_min_pos(t_stack *stack);
int			find_max_pos(t_stack *stack);
void		normalize(t_stack *a);

void		sort_three(t_stack *a);
void		sort_five(t_stack *a, t_stack *b);
void		turk_sort(t_stack *a, t_stack *b);
void		push_all_to_b(t_stack *a, t_stack *b);
void		push_all_to_a(t_stack *a, t_stack *b);
void		do_cheapest_move(t_stack *a, t_stack *b);
void		set_positions(t_stack *stack);
void		set_targets_a_to_b(t_stack *a, t_stack *b);
void		set_targets_b_to_a(t_stack *a, t_stack *b);
void		set_costs(t_stack *a, t_stack *b);
void		rotate_to_top_a(t_stack *a, t_stack *b, t_node *node);
void		rotate_min_to_top(t_stack *a);

#endif
