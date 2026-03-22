/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:52:10 by marvin            #+#    #+#             */
/*   Updated: 2026/03/22 13:26:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	isvalid_arg(char *arg)
{
	char	**array_str;
	int		i;
	int		j;

	array_str = ft_split(arg, ' ');
	i = 0;
	while (array_str[i])
	{
		j = 0;
		if (array_str[i][j] == '-' || array_str[i][j] == '+')
			j++;
		if (!array_str[i][j])
			return (0);
		while (array_str[i][j])
		{
			if (!ft_isnumber(array_str[i][j]))
			{
				free(array_str);
				return (0);
			}
			j++;
		}
		i++;
	}
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
	while (matrix_str_number[i] != NULL)
	{
		current_number = ft_atoi(matrix_str_number[i]);
		node = create_node(current_number);
		add_final_list(stack, node);
		i++;
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
			return (0);
		i++;
	}
	add_index_node(&stack_a);
	push_swap(&stack_a, &stack_b);
	print_list(&stack_a);
	return (0);
}
