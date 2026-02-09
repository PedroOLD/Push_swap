/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:58:34 by marvin            #+#    #+#             */
/*   Updated: 2026/02/09 20:15:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_count_word(char	*str, char c)
{
	int	index;
	int	total_words;

	index = 0;
	total_words = 0;
	while (str[index] != '\0')
	{
		if(str[index] != c && (str[index + 1] == c || str[index + 1] == '\0'))
			total_words++;
		index++;
	}
	return (total_words);
}

char	**ft_split (char	*str, char	c)
{
	char	**matrix;
	int		index;
	int		start_word;
	int		total_words;
	int		word_index;

	index = 0;
	word_index = 0;
	total_words = ft_count_word(str, c);
	matrix = (char **)malloc((total_words + 1) * sizeof(char *));
	matrix[total_words] = NULL;
	if (!matrix)
		return (0);
	while (str && str[index] != '\0')
	{
		if (str[index] != c && (index == 0 || str[index - 1] == c))
			start_word = index;
		if(str[index] != c && (str[index + 1] == c || str[index + 1] == '\0'))
		{
			matrix[word_index] = ft_substr(str, start_word, ((index + 1) - start_word));
			word_index++;
		}
		index++;
	}
	return (matrix);
}
