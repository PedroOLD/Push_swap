/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:10:30 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/08 08:47:17 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_pos(t_stack **a)
{
	t_stack	*tmp;
	int		min;
	int		pos;
	int		i;

	tmp = *a;
	min = tmp->number;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->number < min)
		{
			min = tmp->number;
			pos = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (pos);
}
