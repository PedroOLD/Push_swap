/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:52:10 by marvin            #+#    #+#             */
/*   Updated: 2026/02/16 19:47:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack *new_node(int value)
{
	t_stack	*new_node;
	
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->number = value;
	new_node->next = NULL;
	return (new_node);
}

static void	add_front_list (t_stack **stack, t_stack *node)
{

	if(!node)
		return;
	node->next = *stack;
	*stack = node;
}

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
		while (array_str[i][j] != '\0')
		{
			if (ft_isnumber(array_str[i][j]))
				j++;
			else 
				return (0);
			j++;
		}
		free(array_str[i]);
		i++;
	}
	return (1);
}

int main(int ac, char **av) {
	int 			i;
	int				current_number;
	t_stack			*node;
	static t_stack	*stack_a;
	// static t_stack	*stack_b;

	i = 1;
	if (ac == 1)
		return (-1);
	while (i < ac)
	{
		if (isvalid_arg(av[i]))
		{
			current_number = ft_atoi(av[i]);
			node = new_node(current_number);
			add_front_list(&stack_a, node);
			free(node);
		}
		else
			return (0); 
		i++;
	}

	while (stack_a != NULL)
	{
		printf("aqui (%i)\n", stack_a->number);

		stack_a = stack_a->next;
	}
	return (0);
}