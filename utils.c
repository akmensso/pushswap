/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:26:22 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/06 21:26:24 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(char *str)
{
	long	n;
	int		sign;
	int		i;

	n = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
		n = n * 10 + (str[i++] - '0');
	return (n * sign);
}

void	error_exit(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
	ft_putstr_fd("Error", 2);  // ← ta libft
	exit(1);
}

int	is_valid_int(char *str)
{
	long	n;
	int		i;

	i = 0;
	n = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		n = n * 10 + (str[i] - '0');
		if (n > (long)INT_MAX + 1)
			return (0);
		i++;
	}
	return (1);
}

void	parse_args(int argc, char **argv, t_stack *a)
{
	int		i;
	long	val;
	t_node	*node;
	t_node	*tmp;

	i = argc - 1;
	while (i >= 1)
	{
		if (!is_valid_int(argv[i]))
			error_exit(a, NULL);
		val = ft_atol(argv[i]);
		if (val > INT_MAX || val < INT_MIN)
			error_exit(a, NULL);
		tmp = a->top;
		while (tmp)
		{
			if (tmp->value == (int)val)
				error_exit(a, NULL);
			tmp = tmp->next;
		}
		node = new_node((int)val);
		if (!node)
			error_exit(a, NULL);
		push_node(a, node);
		i--;
	}
}
