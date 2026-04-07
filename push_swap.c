/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:57:59 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/07 19:13:06 by pdo-sant         ###   ########.fr       */
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

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		max_bits;
	int		size;
	int		i;
	int		j;

	size = stack_size(stack_a);
	if (size == 3)
	{
		free_stack(stack_b);
		return (sort_three(stack_a));
	}
	if (size == 5)
		return (sort_five(stack_a, stack_b));
	max_bits = counter_max_bits(stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp = *stack_a;
			if (((temp->index_node >> i) & 1))
				do_ra(stack_a);
			else
				do_pb(stack_a, stack_b);
		}
		while (*stack_b)
			do_pa(stack_a, stack_b);
		i++;
	}
}
