/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:01:53 by marvin            #+#    #+#             */
/*   Updated: 2026/03/23 15:36:41 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_stack(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*second_node;
	t_stack	*head;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	second_node = first_node->next;
	second_node->prev = NULL;
	first_node->next = NULL;
	head = second_node;
	while (second_node)
	{
		if (second_node->next == NULL)
			break ;
		second_node = second_node->next;
	}
	second_node->next = first_node;
	first_node->prev = second_node;
	*stack = head;
}
