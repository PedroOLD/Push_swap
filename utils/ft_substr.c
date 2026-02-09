/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:53:19 by marvin            #+#    #+#             */
/*   Updated: 2026/02/09 19:59:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char *ft_substr(char *str, long start, long len)
{
	int		index;
	char	*result;
	
	if (!str || len == 0)
		return (NULL);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
		index = 0;
	while (index < len)
	{
		result[index] = str[start];
		start++;
		index++;
	}
	return (result);
}