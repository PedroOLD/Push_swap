/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:52:10 by marvin            #+#    #+#             */
/*   Updated: 2026/02/24 21:42:05 by marvin           ###   ########.fr       */
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
		while (array_str[i][j] != '\0')
		{
			if (ft_isnumber(array_str[i][j]))
				j++;
			else
			{
				free(array_str[i]);
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int main(int ac, char **av) {
	int 			i;
	int				j;
	int				current_number;
	char			**matrix_str_number;
	t_stack			*node;
	static t_stack	*stack_a;
	// static t_stack	*stack_b;
	t_stack			*temp;

	i = 1;
	if (ac == 1)
		return (-1);
	while (i < ac)
	{
		if (isvalid_arg(av[i]))
		{
			j = 0;
			matrix_str_number = ft_split(av[i], ' ');
			while (matrix_str_number[j] != NULL)
			{
				current_number = ft_atoi(matrix_str_number[j]);
				node = create_node(current_number);
				add_final_list(&stack_a, node);
				j++;
			}
		}
		else
			return (0); 
		i++;
	}

	temp = stack_a;
	while (temp != NULL)
	{
		printf("aqui (%i)\n", temp->number);

		temp = temp->next;
	}
	return (0);
}
