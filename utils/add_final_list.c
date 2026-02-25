/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_final_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:53:44 by marvin            #+#    #+#             */
/*   Updated: 2026/02/24 21:05:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    add_final_list(t_stack **stack, t_stack *node)
{
    t_stack *temp;

    if(node == NULL)
        return;
    if(*stack == NULL)
    {
        *stack = node;
        return ;
    }
    temp = *stack;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = node;
}
