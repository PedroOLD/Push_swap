/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:52:10 by marvin            #+#    #+#             */
/*   Updated: 2026/03/25 11:52:24 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_number(char *str)
{
	int	j;

	j = 0;
	if (str[j] == '-' || str[j] == '+')
		j++;
	if (!str[j])
		return (0);
	while (str[j])
	{
		if (!ft_isnumber(str[j]))
			return (0);
		j++;
	}
	return (1);
}

static int	isvalid_arg(char *arg)
{
	char	**array_str;
	int		i;

	array_str = ft_split(arg, ' ');
	if (!array_str)
		return (0);
	i = 0;
	while (array_str[i])
	{
		if (!is_valid_number(array_str[i]))
		{
			free_array(array_str);
			return (0);
		}
		i++;
	}
	free_array(array_str);
	return (1);
}

static void	add_args_stack(char *str, t_stack **stack)
{
	int		i;
	char	**matrix_str_number;
	int		current_number;
	t_stack	*node;

	i = 0;
	matrix_str_number = ft_split(str, ' ');
	if (!matrix_str_number)
		return ;
	while (matrix_str_number[i] != NULL)
	{
		current_number = ft_atoi(matrix_str_number[i]);
		node = create_node(current_number);
		add_final_list(stack, node);
		i++;
	}
	free_array(matrix_str_number);
}

static void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

int	main(int ac, char **av)
{
	int				i;
	static t_stack	*stack_a;
	static t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (ac == 1)
		return (-1);
	while (i < ac)
	{
		if (isvalid_arg(av[i]))
			add_args_stack(av[i], &stack_a);
		else
		{
			free_stack(&stack_a);
			return (0);
		}
		i++;
	}
	add_index_node(&stack_a);
	push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
