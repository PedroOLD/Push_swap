/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:02:06 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/07 19:02:16 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_stack **a, t_stack **b)
{
	rotate_to_min(a);
	push(b, a);
	write(1, "pb\n", 3);
	sort_three(a);
	push(a, b);
	write(1, "pa\n", 3);
}
