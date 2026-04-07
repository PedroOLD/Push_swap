/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:03:50 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/07 19:04:02 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	rotate_to_min(a);
	push(b, a);
	write(1, "pb\n", 3);
	rotate_to_min(a);
	push(b, a);
	write(1, "pb\n", 3);
	sort_three(a);
	push(a, b);
	write(1, "pa\n", 3);
	push(a, b);
	write(1, "pa\n", 3);
}
