/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:45:44 by marvin            #+#    #+#             */
/*   Updated: 2026/03/22 11:13:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_index_node(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*min_node;
	int		index;

	if(!stack || !*stack)
		return ;
	index = 0;
	while (1) {
		temp = *stack;
		min_node = NULL;
		while (temp)
		{
			if(!temp->was_used && (!min_node || temp->number < min_node->number))
				min_node = temp;
			temp = temp->next;
		}

		if (!min_node)
			break ;
		min_node->was_used = 1;
		min_node->index_node = index;
		index++;
	}
}
