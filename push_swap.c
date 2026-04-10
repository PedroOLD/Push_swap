/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:57:59 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/10 10:21:36 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static int	counter_max_bits(t_stack **stack)
{
	int	max_bits;
	int	size;

	size = stack_size(stack);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	return (max_bits);
}

static void	radix_sort(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		max_bits;
	int		size;
	int		i;
	int		j;

	size = stack_size(a);
	max_bits = counter_max_bits(a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp = *a;
			if (((temp->index_node >> i) & 1))
				do_ra(a);
			else
				do_pb(a, b);
		}
		while (*b)
			do_pa(a, b);
		i++;
	}
}

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(stack_a);
	if (size == 3)
	{
		free_stack(stack_b);
		sort_three(stack_a);
		return ;
	}
	if (size == 5)
	{
		sort_five(stack_a, stack_b);
		return ;
	}
	radix_sort(stack_a, stack_b);
}
