/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:57:06 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/07 18:57:45 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->number;
	s = (*a)->next->number;
	t = (*a)->next->next->number;
	if (f < s && s < t)
	{
		free_stack(a);
		print_error(2);
	}
	if (f > s && s > t)
	{
		do_sa(a);
		do_rra(a);
	}
	else if (f > s && f > t)
		do_ra(a);
	else if (f < t && s > t)
		do_sa(a);
	else if (f > t && s < t)
		do_rra(a);
	else
		do_sa(a);
}
