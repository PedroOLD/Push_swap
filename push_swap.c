/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:57:56 by marvin            #+#    #+#             */
/*   Updated: 2026/03/18 16:06:55 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	print_list(stack_a);
	ft_printf("lista b ---------- \n");
	print_list(stack_b);
}