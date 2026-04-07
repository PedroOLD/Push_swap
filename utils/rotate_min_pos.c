/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_min_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:13:15 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/07 19:13:27 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate_to_min(t_stack **a)
{
	int	min_pos;
	int	i;

	min_pos = find_min_pos(a);
	i = 0;
	if (min_pos <= stack_size(a) / 2)
		while (i++ < min_pos)
		{
			rotate_stack(a);
			write(1, "ra\n", 3);
		}
	else
	{
		min_pos = stack_size(a) - min_pos;
		while (i++ < min_pos)
		{
			rotate_reverse_stack(a);
			write(1, "rra\n", 4);
		}
	}
}
