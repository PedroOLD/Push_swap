/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 12:26:34 by marvin            #+#    #+#             */
/*   Updated: 2026/03/14 20:56:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_stack **stack)
{
	t_stack *temp;

	temp = *stack;
	while (temp)
	{
		ft_printf("list (%i) \n", temp->number);
		if (temp->next == NULL)
			break ;
		temp = temp->next;
	}
}