/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:45:44 by marvin            #+#    #+#             */
/*   Updated: 2026/03/23 17:29:35 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_index_node(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*min_n;
	int		index;

	if (!stack || !*stack)
		return ;
	index = 0;
	while (1)
	{
		temp = *stack;
		min_n = NULL;
		while (temp)
		{
			if (!temp->was_used && (!min_n || temp->number < min_n->number))
				min_n = temp;
			temp = temp->next;
		}
		if (!min_n)
			break ;
		min_n->was_used = 1;
		min_n->index_node = index;
		index++;
	}
}
