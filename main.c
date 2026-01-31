/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:52:10 by marvin            #+#    #+#             */
/*   Updated: 2026/01/27 13:57:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_args(char *arg)
{
	int	strlen;
	int	i;

	i = 0;
	if (arg == '\0')
		return (-1);
	strlen = ft_strlen(agr);
	while (i < strlen)
	{
		if (str[i] != ft_isnumb() || str[i] != ' ')
			return (-1);
		i++;
	}
	return (i)
}

int main(int ac, char **av) {
	int i;

	i = 1;
	if (ac == 1)
		return (-1);
	
	return (0);
}