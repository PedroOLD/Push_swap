/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:03:23 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/02/26 02:44:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_stack(t_stack **stack)
{
	t_stack *first_node;
	t_stack *second_node;

	if (!stack || !*stack || !((*stack)->next))
		return ;

	first_node = *stack;
	second_node = first_node->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	*stack = second_node;
}