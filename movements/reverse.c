/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:45:29 by marvin            #+#    #+#             */
/*   Updated: 2026/03/15 00:07:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotate_reverse_stack(t_stack **stack)
{
    t_stack *temp;
    t_stack *head;
    t_stack *penultimate;

    if (!stack || !*stack)
        return ;
    head = *stack;
    temp = *stack;
    while (temp)
    {
        if (temp->next == NULL)
            break ;
        temp = temp->next;
    }
    penultimate = temp->prev;
    penultimate->next = NULL;
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    *stack = temp;
}
