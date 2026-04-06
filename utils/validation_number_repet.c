/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_number_repet.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:59:46 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/04/06 16:50:58 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	validation_number_repert(int current_number, t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp)
	{
		if (temp->number == current_number)
			return (1);
		temp = temp->next;
	}
	return (0);
}
