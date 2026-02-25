/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_first_item.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:03:23 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/02/25 18:18:58 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_first_item(t_stack **stack)
{

    if (!stack || !*stack || !((*stack)->next))
        return ;

	t_stack *first_node;
    t_stack *second_node;

    first_node = *stack;
    *stack = (*stack)->next;
    (*stack)->next = first_node;
}