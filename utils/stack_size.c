/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 11:38:58 by marvin            #+#    #+#             */
/*   Updated: 2026/03/22 11:45:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_size(t_stack **stack)
{
	int		count;
	t_stack *temp;

	temp = *stack;
	count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}