/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:52:10 by marvin            #+#    #+#             */
/*   Updated: 2026/02/15 22:27:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack *new_node(int value)
{
	t_stack	*new_node;
	
	new_node = (t_stack *)malloc(sizeof(t_stack));
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
	t_stack			*node;
	static t_stack	*stack_a;
	static t_stack	*stack_b;

	i = 1;
	if (ac == 1)
		return (-1);
	while (i < ac)
	{
		if (isvalid_arg(av[i]))
		{
			node = new_node(av[i]);
			add_front_list(&stack_a, new_node);
		}
		else
			return (0); 
		i++;
	}
	return (0);
}